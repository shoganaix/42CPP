/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:14:47 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:17:55 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceStrings(std::string &s1, std::string &s2, std::string &line, std::ofstream &outfile)
{
    std::string newLine = line;
    size_t pos = 0;

    while ((pos = newLine.find(s1, pos)) != std::string::npos) 
    {
        newLine.erase(pos, s1.length());
        newLine.insert(pos, s2);
        pos += s2.length();
    }
    outfile << newLine << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc != 4) {
        return(std::cout << "\033[1;31m Error! \033[0m Program must take exactly three parameters in the following order:\n"
            <<" • filename\n"
            <<" • string s1\n" 
            <<" • string 2\n" << std::endl, 1);
    }

    const char *infileName = argv[1];
    std::string outfileName = std::string(infileName) + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::fstream    infile;
    std::ofstream   outfile;
    std::string     line;
    
    infile.open(infileName, std::fstream::in);
    outfile.open(outfileName.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);

    if (!infile.is_open())
    {
        outfile.close();
        std::remove(outfileName.c_str()); 
        return(std::cout << "\033[1;31m Error! \033[0m Cannot open file " << infileName << std::endl, 1);
    }

    if (!outfile.is_open())
    {
        infile.close();
        return(std::cout << "\033[1;31m Error! \033[0m Cannot create file " << outfileName << std::endl, infile.close(), 1);
    }

    while (std::getline(infile, line)) 
            replaceStrings(s1, s2, line, outfile);
    
    infile.close();
    outfile.close();
    return 0;
}

/*
*                                        LEARNED FUNCTIONS
*
*       -> outfileName.c_str():
*           Converts a std::string object to a const char* pointer, which is the required type
*           for functions like fstream's open().
*
*       -> infile.open(infileName, std::fstream::in | std::fstream::out | std::fstream::app):
*           Opens the file for reading (in), writing (out), and appending at the end (app).
*           If the file does not exist, it will be created.
*
*       -> infile.is_open(): //
*           Checks if the file was successfully opened.
*           Returns true if it's open, or false if there was an error.
*       -> infile.close(): 
*           Closes the file specified.
*
*       -> std::remove(outfileName.c_str()):
*           Deletes the file specified.
*
*       -> newLine.find(s1, pos): 
*           Searches in 'newLine' for the next occurrence of substring 's1' starting from position 'pos'.
*           If found, it returns the index (pos) where it starts.
*
*       -> newLine.erase(pos, s1.length()):
*           Removes from the string 'newLine' the substring that starts at position 'pos'
*           and has a length of s1.length().
*           If 's1' is not found, it returns std::string::npos = -1 (size_t)
*
*       -> newLine.insert(pos, s2):
*           Inserts the substring 's2' into 'newLine' at position 'pos'.
*
*/