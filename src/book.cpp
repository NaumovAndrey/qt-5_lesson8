#include "book.h"

Book::Book(QString auth, QString tit) : autor(auth), title(tit) {};

QString Book::getAutor() const
{
    return autor;
}

QString Book::getTitle() const
{
    return title;
}