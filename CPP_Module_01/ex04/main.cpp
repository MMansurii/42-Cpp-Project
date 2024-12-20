#include <iostream>
# include <fstream>
# include <string>

int main(int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;
    size_t i = 0;
    
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace filename s1 s2" << std::endl;
        return (1);
    }
    else 
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        
        std::ifstream file(filename);
        if (!file.is_open())
        {
            std::cerr << "File not found." << std::endl;
            return (1);
        }
        else
        {
            std::ofstream new_file(filename + ".replace");
            if (!new_file.is_open())
            {
                std::cerr << "File not created." << std::endl;
                return (1);
            }
            else if (!s1.empty() || !s2.empty())
            {
                std::string line;
                while (std::getline(file, line))
                {
                    size_t found = line.find(s1);
                    if (found != std::string::npos)
                    {
                        while (found != std::string::npos)
                        {
                            line.erase(found, s1.length());
                            i = 0;
                            while (i < s2.length())
                            {
                                line.insert(found, 1, s2[i++]);
                                found++;
                            }
                            found = line.find(s1, found + s2.length());
                        }
                        new_file << line << std::endl;
                    }
                    else
                        new_file << line << std::endl;
                }   
                new_file.close();           
            }
            else
            {
                new_file.close();
                std::cerr << "s1 or s2 is empty." << std::endl;
                return (1);
            }
            
            file.close();
        }
        
    }
}