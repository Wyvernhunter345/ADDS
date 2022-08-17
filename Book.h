#ifndef BOOK
#define BOOK
#include <string>
#include "Document.h"

class Book : public Document
{
public:
    int getDocumentId(); // get the id of the document
};

#endif // BOOK