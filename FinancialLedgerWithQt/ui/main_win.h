#pragma once

#include <QWidget>

#include <QPainter>
#include <QStyleOption>

class MainWin : public QWidget
{
public:
	MainWin() 
	{
		// background �̹��� ����
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

	// TODO: ��Ʈ��ũ�� ����Ǿ� ������ ������ ���������� ����
	void saveToServer()
	{

	}

	void loadFromServer()
	{

	}

};