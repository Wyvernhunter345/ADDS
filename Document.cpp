#include "Document.h"
#include <string>
#include <vector>

Document::Document()
{
    // increment id for each new book object instantiated
    id = ++Document::id;
}

std::string Document::getDocumentContent()
{
    return content;
}

void Document::setDocumentContent(std::string c)
{
    content = c;
}

Document::~Document()
{
    //dtor
}