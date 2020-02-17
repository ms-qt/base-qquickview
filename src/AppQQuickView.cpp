//
// Created by maohuawei on 2020/2/17.
//

#include "AppQQuickView.h"


AppQQuickView::AppQQuickView()
{
    const QUrl url(QStringLiteral("qrc:/qml/main.qml"));
    this->setSource(url);
    this->show();
}
