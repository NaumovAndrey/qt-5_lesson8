#include <QString>

class Book
{
    private:
    QString autor;
    QString title;

    public:
    Book(QString, QString);

    QString getAutor() const;
    QString getTitle() const;

};