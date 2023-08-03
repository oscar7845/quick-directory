#include <QApplication>
#include <QFileIconProvider>

#include "pathmenu.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFileIconProvider iconProvider;

    QSystemTrayIcon trayIcon(&app);
    trayIcon.setIcon(iconProvider.icon(QFileIconProvider::Folder));

    QMenu trayMenu;
    QObject::connect(&trayMenu, &QMenu::aboutToShow, [&]()
    {
        //
    });

}