#include "Graph.h"
#include <fstream>
int main()
{
    // create the graph given in above fugure

 
    //  making above shown graph
 ifstream fin;

      // Read the maze from the file.
       string fileName;
      std::cout<< " Please enter the file name"<< std::endl;
        std::cin>> fileName;
      
      fin.open(fileName.c_str());
      if (!fin)
      {
         cerr << "Cannot open " << fileName << endl;
         exit(1);
      }
      //creates graph object and passes the fstream object by reference 

      Graph g(fin);
      fin.close();
      
      g.primMST();
 
    return 0;
}
