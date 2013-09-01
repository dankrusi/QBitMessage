#include "mainwindow.h"

#include <QApplication>
#include <iostream>
#include <botan/botan.h>
#include "config.h"
#include "libbitmessage/config.h"
#include "libbitmessage/exceptions.h"
#include "libbitmessage/unittests.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if(RUN_LIBBITMESSAGE_TESTS) {
        try
        {
            std::cout << LIBRARY_NAME << " " << LIBRARY_VERSION << std::endl;
            Botan::LibraryInitializer init;
            run_unit_tests();
        }
        catch(bm::BaseException& bmex)
        {
            std::cerr << bmex.file() << " [" << bmex.line() << "]: " << bmex.function() << ": " << bmex.what() << std::endl;
        }
        catch(std::exception& stdex)
        {
            std::cerr << stdex.what() << std::endl;
        }
    }

    MainWindow w;
    w.show();
    
    return a.exec();
}
