#ifndef MULTICLIENTSERVER_H
#define MULTICLIENTSERVER_H
#include <QTcpServer>
class MultiClientServer : public QTcpServer
{
    Q_OBJECT

public:
    explicit MultiClientServer();
    ~MultiClientServer();

    void start();
    void stop();

protected:
    void sendHello(QTcpSocket *client);

protected slots:
    void handleNewConnection();
    void clientDisconnected();
    void readyRead();
    //bool hasPendingConnection();

private:
    QList<QTcpSocket *> clientConnections;

};



#endif // MULTICLIENTSERVER_H
