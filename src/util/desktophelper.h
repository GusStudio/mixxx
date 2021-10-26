#pragma once

#include <QtGlobal>

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
QT_FORWARD_DECLARE_CLASS(QStringList);
#endif

namespace mixxx {

class DesktopHelper {
public:
   static void openInFileBrowser(const QStringList& paths);
};

} // namespace mixxx
