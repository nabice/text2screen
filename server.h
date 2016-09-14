#ifndef SERVER_H
#define SERVER_H

#include <QStringList>
#include <QTcpServer>

class Server : public QTcpServer
{
    Q_OBJECT

 public:
    Server(QObject *parent = 0);

 protected:
    void incomingConnection(qintptr socketDescriptor) Q_DECL_OVERRIDE;

 private:
    QStringList fortunes;
};

#endif
