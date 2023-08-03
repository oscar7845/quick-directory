#include "pathmenu.h"

#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

PathMenu::PathMenu(const QString &fullPath, const QString &label)
    : QMenu()
    , m_fullPath(fullPath)
{
    connect(this, &QMenu::aboutToShow, this, &PathMenu::fill);

    if (label.isEmpty()) {
        const QDir dir(fullPath);
        setTitle(dir.dirName());
    } else {
        setTitle(label);
    }
}

PathMenu::~PathMenu()
{

}

void PathMenu::fill()
{

}

void PathMenu::mousePressEvent(QMouseEvent *ev)
{

}

void PathMenu::mouseDoubleClickEvent(QMouseEvent *ev)
{

}