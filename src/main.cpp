#include <QDebug>
#include <QList>
#include <algorithm>
#include "book.h"

bool compareByTitle(const Book &b1, const Book &b2)
{
    return b1.getTitle() < b2.getTitle();
}

int main()
{
    QList<Book> books = 
    {
        Book("Jack London", "The Call of the Wild"),
        Book("lev Tolstoy", "War and Peace"),
        Book("William Sheakspeare", "Hamlet"),
        Book("Honore Balzac", "Father Goriot")
    };

    std::sort(books.begin(), books.end(), compareByTitle);
    
    for(auto b:books)
    {
        qInfo() << b.getAutor() << ":" << b.getTitle() << Qt::endl;
    }

    return 0;
}

