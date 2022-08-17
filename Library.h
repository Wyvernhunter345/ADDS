#ifndef LIBRARY
#define LIBRARY
#include <vector>
#include <string>
#include "Document.h"

class Library
{
private:
    std::vector<Document *> documents; // vector of documents

public:
    Library(); // constructor

    void addDocument(Document *d); // add a document to the library
    bool hasDocument(Document *d); // check if a document is in the library

    ~Library(); // destructor
};

#endif // LIBRARY