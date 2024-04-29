#pragma once

#include <QWidget>

#include <QPainter>
#include <QStyleOption>

class MainWin : public QWidget
{
public:
	MainWin() 
	{
		// background 이미지 생성
		setStyleSheet(
			"background-image:url(\":/Image/image/bgimg.jpg\"); background-position: center;"
		);

	}

	void saveToFile()
	{

	}

	void loadFromFile()
	{

	}

	// TODO: 네트워크가 연결되어 있으면 파일을 가져오도록 구현
	void saveToServer()
	{

	}

	void loadFromServer()
	{

	}

};