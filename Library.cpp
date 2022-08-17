#include "Library.h"
#include "Document.h"
#include <string>
#include <vector>

Library::Library()
{
    //ctor
}

void Library::addDocument(Document *d)
{
    documents.push_back(d);
}

bool Library::hasDocument(Document *d)
{
    for (int i = 0; i < documents.size(); i++)
    {
        if (documents[i] == d)
        {
            return true;
        }
    }
    return false;
}

Library::~Library()
{
    //dtor
}
