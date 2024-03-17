#include <QCoreApplication>
#include <bitset>
#include <qdebug.h>
#include <vector>
#include <map>


using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bitset< 32 > bitvec2( 0x0012 );
    qDebug() << "bitvec: включенные биты:\n\t";
    for ( int index = 0; index < 32; ++index )
       if ( bitvec2[ index ] )
         qDebug() << index << " ";
    qDebug() << Qt::endl;
    vector<int> vec1;
    // template <class key,class T> map; - описание
    map<int,double> map1;

    return a.exec();
}
