#include "Library.h"
#include "Document.h"
#include "Book.h"
#include <string>
#include <vector>
#include <iostream>

void checkDoc(Library *l, Document *d)
{
    if (l->hasDocument(d))
    {
        std::cout << "Document is in library" << std::endl;
    }
    else
    {
        std::cout << "Document is not in library" << std::endl;
    }
}

int main()
{
    Library library;
    Book book;
    Book book2;
    library.addDocument(&book);
    checkDoc(&library, &book);
    checkDoc(&library, &book2);
    return 0;
}