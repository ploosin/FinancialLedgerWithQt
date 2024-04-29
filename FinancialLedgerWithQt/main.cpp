#include <QApplication>
#include <QIcon>

#include "ui/main_win.h"


int main(int argc, char** argv)
{
	QApplication app{ argc, argv };

	// 아이콘 설정
	app.setWindowIcon(QIcon{ ":/Image/image/icon.jpg" });

	// 어플 이름 설정 
	// 한글로 설정하기 위해서는 소스코드를 유니코드(서명없는 65001)로 저장해야함
	// https://cheongpark.tistory.com/27
	app.setApplicationName("우리집 가계부");

	// 메인 윈도우 생성
	auto mainWin = new MainWin();
	mainWin->show();

	return app.exec();
}
