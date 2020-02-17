//
// Created by maohuawei on 2020/2/17.
//

#include <QApplication>
#include <AppQQuickView.h>

int main()
{
    QApplication app(argc, argv);


    AppQQuickView appQQuickView;
    appQQuickView.show();

    return app.exec();
}