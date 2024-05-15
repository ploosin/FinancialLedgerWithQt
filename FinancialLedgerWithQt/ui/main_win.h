#pragma once

#include <QtWidgets>

class MainWin : public QWidget
{
public:
	MainWin() 
	{

		resize(800, 600);


		//hBoxLayout_ = new QHBoxLayout{ this };
		//incomeListView_  = new QListView{ this };
		//outcomeListView_ = new QListView{ this };


		//

		// Layout 설정
		QVBoxLayout* mainLayout = new QVBoxLayout{ this };

		// 상단 레이아웃
		QHBoxLayout* topLayout = new QHBoxLayout{};
		QLabel* dateLabel = new QLabel("날짜:", this);
		topLayout->addWidget(dateLabel);
		dateLineEdit = new QLineEdit(this);
		topLayout->addWidget(dateLineEdit);
		QPushButton* addTransactionButton = new QPushButton("거래 추가", this);
		topLayout->addWidget(addTransactionButton);
		mainLayout->addLayout(topLayout);

		// 거래 내역 테이블
		transactionTable = new QTableWidget(this);
		transactionTable->setColumnCount(3);
		QStringList headers;
		headers << "날짜" << "내용" << "금액";
		transactionTable->setHorizontalHeaderLabels(headers);
		mainLayout->addWidget(transactionTable);

		// background 이미지 생성
		transactionTable->setStyleSheet(
			"background-image:url(\":/Image/image/bgimg.jpg\"); background-position: center;"
		);

		connect(addTransactionButton, &QPushButton::clicked, this, [this]{});

	}

private:
	
	//QHBoxLayout* hBoxLayout_{nullptr};
	//QListView*  incomeListView_{ nullptr };
	//QListView* outcomeListView_{ nullptr };

	QLineEdit* dateLineEdit;
	QTableWidget* transactionTable;
	
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