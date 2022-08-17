#ifndef DOCUMENT
#define DOCUMENT
#include <vector>
#include <string>

class Document
{
private:
    int id;              // id of the document
    std::string content; // content of the document

public:
    Document(); // constructor

    virtual int getDocumentId() = 0; // get the id of the document

    std::string getDocumentContent();       // get the content of the document
    void setDocumentContent(std::string c); // set the content of the document

    ~Document(); // destructor
};

#endif // DOCUMENT