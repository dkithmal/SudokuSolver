#include "finalsudokuqt.h"


finalsudokuqt::finalsudokuqt(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	QFont Font,Font2,Font3;  
	Font.setPointSize(18);
	QApplication::setFont(Font);

 
	Font2.setPointSize(12);
	ui.pushButton->setFont(Font2);
	ui.pushButton_2->setFont(Font2);
	Font3.setPointSize(8);
	ui.pushButton_3->setFont(Font3);

	ui.lineEdit->setMaxLength(1);
	ui.lineEdit_2->setMaxLength(1);
	ui.lineEdit_3->setMaxLength(1);
	ui.lineEdit_4->setMaxLength(1);
	ui.lineEdit_5->setMaxLength(1);
	ui.lineEdit_6->setMaxLength(1);
	ui.lineEdit_7->setMaxLength(1);
	ui.lineEdit_8->setMaxLength(1);
	ui.lineEdit_9->setMaxLength(1);
	ui.lineEdit_10->setMaxLength(1);
	ui.lineEdit_11->setMaxLength(1);
	ui.lineEdit_12->setMaxLength(1);
	ui.lineEdit_13->setMaxLength(1);
	ui.lineEdit_14->setMaxLength(1);
	ui.lineEdit_15->setMaxLength(1);
	ui.lineEdit_16->setMaxLength(1);
	ui.lineEdit_17->setMaxLength(1);
	ui.lineEdit_18->setMaxLength(1);
	ui.lineEdit_19->setMaxLength(1);
	ui.lineEdit_20->setMaxLength(1);
	ui.lineEdit_21->setMaxLength(1);
	ui.lineEdit_22->setMaxLength(1);
	ui.lineEdit_23->setMaxLength(1);
	ui.lineEdit_24->setMaxLength(1);
	ui.lineEdit_25->setMaxLength(1);
	ui.lineEdit_26->setMaxLength(1);
	ui.lineEdit_27->setMaxLength(1);
	ui.lineEdit_28->setMaxLength(1);
	ui.lineEdit_29->setMaxLength(1);
	ui.lineEdit_30->setMaxLength(1);
	ui.lineEdit_31->setMaxLength(1);
	ui.lineEdit_32->setMaxLength(1);
	ui.lineEdit_33->setMaxLength(1);
	ui.lineEdit_34->setMaxLength(1);
	ui.lineEdit_35->setMaxLength(1);
	ui.lineEdit_36->setMaxLength(1);
	ui.lineEdit_37->setMaxLength(1);
	ui.lineEdit_38->setMaxLength(1);
	ui.lineEdit_39->setMaxLength(1);
	ui.lineEdit_40->setMaxLength(1);
	ui.lineEdit_41->setMaxLength(1);
	ui.lineEdit_42->setMaxLength(1);
	ui.lineEdit_43->setMaxLength(1);
	ui.lineEdit_44->setMaxLength(1);
	ui.lineEdit_45->setMaxLength(1);
	ui.lineEdit_46->setMaxLength(1);
	ui.lineEdit_47->setMaxLength(1);
	ui.lineEdit_48->setMaxLength(1);
	ui.lineEdit_49->setMaxLength(1);
	ui.lineEdit_50->setMaxLength(1);
	ui.lineEdit_51->setMaxLength(1);
	ui.lineEdit_52->setMaxLength(1);
	ui.lineEdit_53->setMaxLength(1);
	ui.lineEdit_54->setMaxLength(1);
	ui.lineEdit_55->setMaxLength(1);
	ui.lineEdit_56->setMaxLength(1);
	ui.lineEdit_57->setMaxLength(1);
	ui.lineEdit_58->setMaxLength(1);
	ui.lineEdit_59->setMaxLength(1);
	ui.lineEdit_60->setMaxLength(1);
	ui.lineEdit_61->setMaxLength(1);
	ui.lineEdit_62->setMaxLength(1);
	ui.lineEdit_63->setMaxLength(1);
	ui.lineEdit_64->setMaxLength(1);
	ui.lineEdit_65->setMaxLength(1);
	ui.lineEdit_66->setMaxLength(1);
	ui.lineEdit_67->setMaxLength(1);
	ui.lineEdit_68->setMaxLength(1);
	ui.lineEdit_69->setMaxLength(1);
	ui.lineEdit_70->setMaxLength(1);
	ui.lineEdit_71->setMaxLength(1);
	ui.lineEdit_72->setMaxLength(1);
	ui.lineEdit_73->setMaxLength(1);
	ui.lineEdit_74->setMaxLength(1);
	ui.lineEdit_75->setMaxLength(1);
	ui.lineEdit_76->setMaxLength(1);
	ui.lineEdit_77->setMaxLength(1);
	ui.lineEdit_78->setMaxLength(1);
	ui.lineEdit_79->setMaxLength(1);
	ui.lineEdit_80->setMaxLength(1);
	ui.lineEdit_81->setMaxLength(1);

	//QLineEdit::setAlignment(Qt::AlignHCenter);
	ui.lineEdit->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_2->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_3->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_4->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_5->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_6->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_7->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_8->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_9->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_10->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_11->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_12->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_13->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_14->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_15->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_16->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_17->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_18->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_19->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_20->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_21->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_22->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_23->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_24->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_25->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_26->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_27->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_28->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_29->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_30->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_31->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_32->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_33->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_34->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_35->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_36->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_37->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_38->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_39->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_40->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_41->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_42->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_43->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_44->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_45->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_46->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_47->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_48->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_49->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_50->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_51->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_52->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_53->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_54->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_55->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_56->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_57->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_58->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_59->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_60->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_61->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_62->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_63->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_64->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_65->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_66->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_67->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_68->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_69->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_70->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_71->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_72->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_73->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_74->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_75->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_76->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_77->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_78->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_79->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_80->setAlignment(Qt::AlignHCenter);
	ui.lineEdit_81->setAlignment(Qt::AlignHCenter);
	
	
	
	
	//ui.lineEdit->setInputMask("9");
}

finalsudokuqt::~finalsudokuqt()
{

}

void finalsudokuqt::slove()
{
	
	
	




	sudo[0][0]=ui.lineEdit->text().toInt();
	sudo[0][1]=ui.lineEdit_2->text().toInt();
	sudo[0][2]=ui.lineEdit_3->text().toInt();
	sudo[0][3]=ui.lineEdit_4->text().toInt();
	sudo[0][4]=ui.lineEdit_5->text().toInt();
	sudo[0][5]=ui.lineEdit_6->text().toInt();
	sudo[0][6]=ui.lineEdit_7->text().toInt();
	sudo[0][7]=ui.lineEdit_8->text().toInt();
	sudo[0][8]=ui.lineEdit_9->text().toInt();
	sudo[1][0]=ui.lineEdit_10->text().toInt();
	sudo[1][1]=ui.lineEdit_11->text().toInt();
	sudo[1][2]=ui.lineEdit_12->text().toInt();
	sudo[1][3]=ui.lineEdit_13->text().toInt();
	sudo[1][4]=ui.lineEdit_14->text().toInt();
	sudo[1][5]=ui.lineEdit_15->text().toInt();
	sudo[1][6]=ui.lineEdit_16->text().toInt();
	sudo[1][7]=ui.lineEdit_17->text().toInt();
	sudo[1][8]=ui.lineEdit_18->text().toInt();
	sudo[2][0]=ui.lineEdit_19->text().toInt();
	sudo[2][1]=ui.lineEdit_20->text().toInt();
	sudo[2][2]=ui.lineEdit_21->text().toInt();
	sudo[2][3]=ui.lineEdit_22->text().toInt();
	sudo[2][4]=ui.lineEdit_23->text().toInt();
	sudo[2][5]=ui.lineEdit_24->text().toInt();
	sudo[2][6]=ui.lineEdit_25->text().toInt();
	sudo[2][7]=ui.lineEdit_26->text().toInt();
	sudo[2][8]=ui.lineEdit_27->text().toInt();
	sudo[3][0]=ui.lineEdit_28->text().toInt();
	sudo[3][1]=ui.lineEdit_29->text().toInt();
	sudo[3][2]=ui.lineEdit_30->text().toInt();
	sudo[3][3]=ui.lineEdit_31->text().toInt();
	sudo[3][4]=ui.lineEdit_32->text().toInt();
	sudo[3][5]=ui.lineEdit_33->text().toInt();
	sudo[3][6]=ui.lineEdit_34->text().toInt();
	sudo[3][7]=ui.lineEdit_35->text().toInt();
	sudo[3][8]=ui.lineEdit_36->text().toInt();
	sudo[4][0]=ui.lineEdit_37->text().toInt();
	sudo[4][1]=ui.lineEdit_38->text().toInt();
	sudo[4][2]=ui.lineEdit_39->text().toInt();
	sudo[4][3]=ui.lineEdit_40->text().toInt();
	sudo[4][4]=ui.lineEdit_41->text().toInt();
	sudo[4][5]=ui.lineEdit_42->text().toInt();
	sudo[4][6]=ui.lineEdit_43->text().toInt();
	sudo[4][7]=ui.lineEdit_44->text().toInt();
	sudo[4][8]=ui.lineEdit_45->text().toInt();
	sudo[5][0]=ui.lineEdit_46->text().toInt();
	sudo[5][1]=ui.lineEdit_47->text().toInt();
	sudo[5][2]=ui.lineEdit_48->text().toInt();
	sudo[5][3]=ui.lineEdit_49->text().toInt();	
	sudo[5][4]=ui.lineEdit_50->text().toInt();
	sudo[5][5]=ui.lineEdit_51->text().toInt();
	sudo[5][6]=ui.lineEdit_52->text().toInt();
	sudo[5][7]=ui.lineEdit_53->text().toInt();
	sudo[5][8]=ui.lineEdit_54->text().toInt();
	sudo[6][0]=ui.lineEdit_55->text().toInt();
	sudo[6][1]=ui.lineEdit_56->text().toInt();
	sudo[6][2]=ui.lineEdit_57->text().toInt();
	sudo[6][3]=ui.lineEdit_58->text().toInt();
	sudo[6][4]=ui.lineEdit_59->text().toInt();
	sudo[6][5]=ui.lineEdit_60->text().toInt();
	sudo[6][6]=ui.lineEdit_61->text().toInt();	
	sudo[6][7]=ui.lineEdit_62->text().toInt();
	sudo[6][8]=ui.lineEdit_63->text().toInt();
	sudo[7][0]=ui.lineEdit_64->text().toInt();
	sudo[7][1]=ui.lineEdit_65->text().toInt();
	sudo[7][2]=ui.lineEdit_66->text().toInt();
	sudo[7][3]=ui.lineEdit_67->text().toInt();
	sudo[7][4]=ui.lineEdit_68->text().toInt();
	sudo[7][5]=ui.lineEdit_69->text().toInt();
	sudo[7][6]=ui.lineEdit_70->text().toInt();
	sudo[7][7]=ui.lineEdit_71->text().toInt();
	sudo[7][8]=ui.lineEdit_72->text().toInt();
	sudo[8][0]=ui.lineEdit_73->text().toInt();
	sudo[8][1]=ui.lineEdit_74->text().toInt();
	sudo[8][2]=ui.lineEdit_75->text().toInt();
	sudo[8][3]=ui.lineEdit_76->text().toInt();
	sudo[8][4]=ui.lineEdit_77->text().toInt();
	sudo[8][5]=ui.lineEdit_78->text().toInt();
	sudo[8][6]=ui.lineEdit_79->text().toInt();
	sudo[8][7]=ui.lineEdit_80->text().toInt();
	sudo[8][8]=ui.lineEdit_81->text().toInt();




	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();
	method8();
	method1();
	method2();
	method3();
	method4();
	method5();
	method8();
	method1();
	method2();
	method3();
	method2();
	method3();
	method4();
	method5();
	method6();
	method7();





	ui.lineEdit->setText(QString::number(sudo[0][0]));
	ui.lineEdit_2->setText(QString::number(sudo[0][1]));
	ui.lineEdit_3->setText(QString::number(sudo[0][2]));
	ui.lineEdit_4->setText(QString::number(sudo[0][3]));
	ui.lineEdit_5->setText(QString::number(sudo[0][4]));
	ui.lineEdit_6->setText(QString::number(sudo[0][5]));
	ui.lineEdit_7->setText(QString::number(sudo[0][6]));
	ui.lineEdit_8->setText(QString::number(sudo[0][7]));
	ui.lineEdit_9->setText(QString::number(sudo[0][8]));
	ui.lineEdit_10->setText(QString::number(sudo[1][0]));
	ui.lineEdit_11->setText(QString::number(sudo[1][1]));
	ui.lineEdit_12->setText(QString::number(sudo[1][2]));
	ui.lineEdit_13->setText(QString::number(sudo[1][3]));
	ui.lineEdit_14->setText(QString::number(sudo[1][4]));
	ui.lineEdit_15->setText(QString::number(sudo[1][5]));
	ui.lineEdit_16->setText(QString::number(sudo[1][6]));
	ui.lineEdit_17->setText(QString::number(sudo[1][7]));
	ui.lineEdit_18->setText(QString::number(sudo[1][8]));
	ui.lineEdit_19->setText(QString::number(sudo[2][0]));
	ui.lineEdit_20->setText(QString::number(sudo[2][1]));
	ui.lineEdit_21->setText(QString::number(sudo[2][2]));
	ui.lineEdit_22->setText(QString::number(sudo[2][3]));
	ui.lineEdit_23->setText(QString::number(sudo[2][4]));
	ui.lineEdit_24->setText(QString::number(sudo[2][5]));
	ui.lineEdit_25->setText(QString::number(sudo[2][6]));
	ui.lineEdit_26->setText(QString::number(sudo[2][7]));
	ui.lineEdit_27->setText(QString::number(sudo[2][8]));
	ui.lineEdit_28->setText(QString::number(sudo[3][0]));
	ui.lineEdit_29->setText(QString::number(sudo[3][1]));
	ui.lineEdit_30->setText(QString::number(sudo[3][2]));
	ui.lineEdit_31->setText(QString::number(sudo[3][3]));
	ui.lineEdit_32->setText(QString::number(sudo[3][4]));
	ui.lineEdit_33->setText(QString::number(sudo[3][5]));
	ui.lineEdit_34->setText(QString::number(sudo[3][6]));
	ui.lineEdit_35->setText(QString::number(sudo[3][7]));
	ui.lineEdit_36->setText(QString::number(sudo[3][8]));
	ui.lineEdit_37->setText(QString::number(sudo[4][0]));
	ui.lineEdit_38->setText(QString::number(sudo[4][1]));
	ui.lineEdit_39->setText(QString::number(sudo[4][2]));
	ui.lineEdit_40->setText(QString::number(sudo[4][3]));
	ui.lineEdit_41->setText(QString::number(sudo[4][4]));
	ui.lineEdit_42->setText(QString::number(sudo[4][5]));
	ui.lineEdit_43->setText(QString::number(sudo[4][6]));
	ui.lineEdit_44->setText(QString::number(sudo[4][7]));
	ui.lineEdit_45->setText(QString::number(sudo[4][8]));
	ui.lineEdit_46->setText(QString::number(sudo[5][0]));
	ui.lineEdit_47->setText(QString::number(sudo[5][1]));
	ui.lineEdit_48->setText(QString::number(sudo[5][2]));
	ui.lineEdit_49->setText(QString::number(sudo[5][3]));
	ui.lineEdit_50->setText(QString::number(sudo[5][4]));
	ui.lineEdit_51->setText(QString::number(sudo[5][5]));
	ui.lineEdit_52->setText(QString::number(sudo[5][6]));
	ui.lineEdit_53->setText(QString::number(sudo[5][7]));
	ui.lineEdit_54->setText(QString::number(sudo[5][8]));
	ui.lineEdit_55->setText(QString::number(sudo[6][0]));
	ui.lineEdit_56->setText(QString::number(sudo[6][1]));
	ui.lineEdit_57->setText(QString::number(sudo[6][2]));
	ui.lineEdit_58->setText(QString::number(sudo[6][3]));
	ui.lineEdit_59->setText(QString::number(sudo[6][4]));
	ui.lineEdit_60->setText(QString::number(sudo[6][5]));
	ui.lineEdit_61->setText(QString::number(sudo[6][6]));
	ui.lineEdit_62->setText(QString::number(sudo[6][7]));
	ui.lineEdit_63->setText(QString::number(sudo[6][8]));
	ui.lineEdit_64->setText(QString::number(sudo[7][0]));
	ui.lineEdit_65->setText(QString::number(sudo[7][1]));
	ui.lineEdit_66->setText(QString::number(sudo[7][2]));
	ui.lineEdit_67->setText(QString::number(sudo[7][3]));
	ui.lineEdit_68->setText(QString::number(sudo[7][4]));
	ui.lineEdit_69->setText(QString::number(sudo[7][5]));
	ui.lineEdit_70->setText(QString::number(sudo[7][6]));
	ui.lineEdit_71->setText(QString::number(sudo[7][7]));
	ui.lineEdit_72->setText(QString::number(sudo[7][8]));
	ui.lineEdit_73->setText(QString::number(sudo[8][0]));
	ui.lineEdit_74->setText(QString::number(sudo[8][1]));
	ui.lineEdit_75->setText(QString::number(sudo[8][2]));
	ui.lineEdit_76->setText(QString::number(sudo[8][3]));
	ui.lineEdit_77->setText(QString::number(sudo[8][4]));
	ui.lineEdit_78->setText(QString::number(sudo[8][5]));
	ui.lineEdit_79->setText(QString::number(sudo[8][6]));
	ui.lineEdit_80->setText(QString::number(sudo[8][7]));
	ui.lineEdit_81->setText(QString::number(sudo[8][8]));

}

void finalsudokuqt::clear()
{


	ui.lineEdit->setText("");
	ui.lineEdit_2->setText("");
	ui.lineEdit_3->setText("");
	ui.lineEdit_4->setText("");
	ui.lineEdit_5->setText("");
	ui.lineEdit_6->setText("");
	ui.lineEdit_7->setText("");
	ui.lineEdit_8->setText("");
	ui.lineEdit_9->setText("");
	ui.lineEdit_10->setText("");
	ui.lineEdit_11->setText("");
	ui.lineEdit_12->setText("");
	ui.lineEdit_13->setText("");
	ui.lineEdit_14->setText("");
	ui.lineEdit_15->setText("");
	ui.lineEdit_16->setText("");
	ui.lineEdit_17->setText("");
	ui.lineEdit_18->setText("");
	ui.lineEdit_19->setText("");
	ui.lineEdit_20->setText("");
	ui.lineEdit_21->setText("");
	ui.lineEdit_22->setText("");
	ui.lineEdit_23->setText("");
	ui.lineEdit_24->setText("");
	ui.lineEdit_25->setText("");
	ui.lineEdit_26->setText("");
	ui.lineEdit_27->setText("");
	ui.lineEdit_28->setText("");
	ui.lineEdit_29->setText("");
	ui.lineEdit_30->setText("");
	ui.lineEdit_31->setText("");
	ui.lineEdit_32->setText("");
	ui.lineEdit_33->setText("");
	ui.lineEdit_34->setText("");
	ui.lineEdit_35->setText("");
	ui.lineEdit_36->setText("");
	ui.lineEdit_37->setText("");
	ui.lineEdit_38->setText("");
	ui.lineEdit_39->setText("");
	ui.lineEdit_40->setText("");
	ui.lineEdit_41->setText("");
	ui.lineEdit_42->setText("");
	ui.lineEdit_43->setText("");
	ui.lineEdit_44->setText("");
	ui.lineEdit_45->setText("");
	ui.lineEdit_46->setText("");
	ui.lineEdit_47->setText("");
	ui.lineEdit_48->setText("");
	ui.lineEdit_49->setText("");
	ui.lineEdit_50->setText("");
	ui.lineEdit_51->setText("");
	ui.lineEdit_52->setText("");
	ui.lineEdit_53->setText("");
	ui.lineEdit_54->setText("");
	ui.lineEdit_55->setText("");
	ui.lineEdit_56->setText("");
	ui.lineEdit_57->setText("");
	ui.lineEdit_58->setText("");
	ui.lineEdit_59->setText("");
	ui.lineEdit_60->setText("");
	ui.lineEdit_61->setText("");
	ui.lineEdit_62->setText("");
	ui.lineEdit_63->setText("");
	ui.lineEdit_64->setText("");
	ui.lineEdit_65->setText("");
	ui.lineEdit_66->setText("");
	ui.lineEdit_67->setText("");
	ui.lineEdit_68->setText("");
	ui.lineEdit_69->setText("");
	ui.lineEdit_70->setText("");
	ui.lineEdit_71->setText("");
	ui.lineEdit_72->setText("");
	ui.lineEdit_73->setText("");
	ui.lineEdit_74->setText("");
	ui.lineEdit_75->setText("");
	ui.lineEdit_76->setText("");
	ui.lineEdit_77->setText("");
	ui.lineEdit_78->setText("");
	ui.lineEdit_79->setText("");
	ui.lineEdit_80->setText("");
	ui.lineEdit_81->setText("");


}







void finalsudokuqt::method1()
{
	//funton 1
	//see 1

	int n,m;
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=3;s>2 && s<9;s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
					for (int d=3;d>2 && d<9;d++)
					{
						if (sudo[n][d]==p)
						{
							if(sudo[m][0]!=p && sudo[m][0]!=0 && sudo[m][1]!=p && sudo[m][1]!=0)
								sudo[m][2]=p;
							if(sudo[m][0]!=p && sudo[m][0]!=0 && sudo[m][2]!=p && sudo[m][2]!=0)
								sudo[m][1]=p;
							if(sudo[m][1]!=p && sudo[m][1]!=0 && sudo[m][2]!=p && sudo[m][2]!=0)
								sudo[m][0]=p;
						}
					}
				}
			}
		}
	}


	//2nd
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0; (s<3) ||(5<s && s<9);s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
					for (int d=0;(d<3) ||(5<d && d<9);d++)
					{
						if (sudo[n][d]==p)
						{
							if(sudo[m][3]!=p && sudo[m][3]!=0 && sudo[m][4]!=p && sudo[m][4]!=0)
								sudo[m][5]=p;
							if(sudo[m][3]!=p && sudo[m][3]!=0 && sudo[m][5]!=p && sudo[m][5]!=0)
								sudo[m][4]=p;
							if(sudo[m][4]!=p && sudo[m][4]!=0 && sudo[m][5]!=p && sudo[m][5]!=0)
								sudo[m][3]=p;

						}
						if (d==2)d=5;
					}
				}
				if(s==2)s=5;
			}
		}
	}



	//3rd
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<6;s++)
			{
				if(sudo[h][s]==p)
			 {
				 if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
				 if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
				 if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

				 for (int d=0;d<6;d++)
				 {
					 if (sudo[n][d]==p)
					 {
						 if(sudo[m][6]!=p && sudo[m][6]!=0 && sudo[m][7]!=p && sudo[m][7]!=0)
							 sudo[m][8]=p;
						 if(sudo[m][6]!=p && sudo[m][6]!=0 && sudo[m][8]!=p && sudo[m][8]!=0)
							 sudo[m][7]=p;
						 if(sudo[m][7]!=p && sudo[m][7]!=0 && sudo[m][8]!=p && sudo[m][8]!=0)
							 sudo[m][6]=p;
					 }
				 }
				}
			}
		}
	}


	//4th
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=3;s>2 && s<9;s++)
			{
				if(sudo[s][h]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
					for (int d=3;d>2 && d<9;d++)
					{
						if (sudo[d][n]==p)
						{
							if(sudo[0][m]!=p && sudo[0][m]!=0 && sudo[1][m]!=p && sudo[1][m]!=0)
								sudo[2][m]=p;
							if(sudo[0][m]!=p && sudo[0][m]!=0 && sudo[2][m]!=p && sudo[2][m]!=0)
								sudo[1][m]=p;
							if(sudo[1][m]!=p && sudo[1][m]!=0 && sudo[2][m]!=p && sudo[2][m]!=0)
								sudo[0][m]=p;
						}
					}
				}
			}
		}
	}


	//5th
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0; (s<3) ||(5<s && s<9);s++)
			{
				if(sudo[s][h]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
					for (int d=0;(d<3) ||(5<d && d<9);d++)
					{
						if (sudo[d][n]==p)
						{
							if(sudo[3][m]!=p && sudo[3][m]!=0 && sudo[4][m]!=p && sudo[4][m]!=0)
								sudo[5][m]=p;
							if(sudo[3][m]!=p && sudo[3][m]!=0 && sudo[5][m]!=p && sudo[5][m]!=0)
								sudo[4][m]=p;
							if(sudo[4][m]!=p && sudo[4][m]!=0 && sudo[5][m]!=p && sudo[5][m]!=0)
								sudo[3][m]=p;

						}
						if (d==2)d=5;
					}
				}
				if(s==2)s=5;
			}
		}
	}


	//6th
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<6;s++)
			{
				if(sudo[s][h]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
					for (int d=0;d<6;d++)
					{
						if (sudo[d][n]==p)
						{
							if(sudo[6][m]!=p && sudo[6][m]!=0 && sudo[7][m]!=p && sudo[7][m]!=0)
								sudo[8][m]=p;
							if(sudo[6][m]!=p && sudo[6][m]!=0 && sudo[8][m]!=p && sudo[8][m]!=0)
								sudo[7][m]=p;
							if(sudo[7][m]!=p && sudo[7][m]!=0 && sudo[8][m]!=p && sudo[8][m]!=0)
								sudo[6][m]=p;
						}
					}
				}
			}
		}
	}



}

void finalsudokuqt::method2()
{
	//2nd functin
	//see 2

	int m,n,x;

	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<6;s++)
			{
				if(sudo[h][s]==p)
				{
					for(int a=0;a<2;a++)
					{
						if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
						if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
						if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
						if(a==1){x=m; m=n; n=x;}

						if(sudo[n][6]!=0 && sudo[n][7]!=0 && sudo[n][8]!=0 && sudo[n][6]!=p && sudo[n][7]!=p && sudo[n][8]!=p)
						{
							if(sudo[m][6]!=0 && sudo[m][7]!=0 && sudo[m][6]!=p && sudo[m][7]!=p)sudo[m][8]=p;
							if(sudo[m][6]!=0 && sudo[m][8]!=0 && sudo[m][6]!=p && sudo[m][8]!=p)sudo[m][7]=p;
							if(sudo[m][7]!=0 && sudo[m][8]!=0 && sudo[m][7]!=p && sudo[m][8]!=p)sudo[m][6]=p;
						}

					}
				}
			}
		}
	}



	//2
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=3;2<s && s<9;s++)
			{
				if(sudo[h][s]==p)
				{
					for(int a=0;a<2;a++)
					{
						if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
						if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
						if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
						if(a==1){x=m; m=n; n=x;}

						if(sudo[n][0]!=0 && sudo[n][1]!=0 && sudo[n][2]!=0 && sudo[n][0]!=p && sudo[n][1]!=p && sudo[n][2]!=p)
						{
							if(sudo[m][0]!=0 && sudo[m][1]!=0 && sudo[m][0]!=p && sudo[m][1]!=p)sudo[m][2]=p;
							if(sudo[m][0]!=0 && sudo[m][2]!=0 && sudo[m][0]!=p && sudo[m][2]!=p)sudo[m][1]=p;
							if(sudo[m][1]!=0 && sudo[m][2]!=0 && sudo[m][1]!=p && sudo[m][2]!=p)sudo[m][0]=p;
						}

					}
				}
			}
		}
	}


	//3
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0; s<3 ||(5<s && s<9);s++)
			{
				if(sudo[h][s]==p)
				{
					for(int a=0;a<2;a++)
					{
						if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
						if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
						if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
						if(a==1){x=m; m=n; n=x;}

						if(sudo[n][3]!=0 && sudo[n][4]!=0 && sudo[n][5]!=0 && sudo[n][3]!=p && sudo[n][4]!=p && sudo[n][5]!=p)
						{
							if(sudo[m][3]!=0 && sudo[m][4]!=0 && sudo[m][3]!=p && sudo[m][4]!=p)sudo[m][5]=p;
							if(sudo[m][3]!=0 && sudo[m][5]!=0 && sudo[m][3]!=p && sudo[m][5]!=p)sudo[m][4]=p;
							if(sudo[m][4]!=0 && sudo[m][5]!=0 && sudo[m][4]!=p && sudo[m][5]!=p)sudo[m][3]=p;
						}

					}
				}
				if(s==2)s=5;
			}
		}
	}






	//4
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<6;s++)
			{
				if(sudo[s][h]==p)
				{
					for(int a=0;a<2;a++)
					{
						if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
						if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
						if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
						if(a==1){x=m; m=n; n=x;}

						if(sudo[6][n]!=0 && sudo[7][n]!=0 && sudo[8][n]!=0 && sudo[6][n]!=p && sudo[7][n]!=p && sudo[8][n]!=p)
						{
							if(sudo[6][m]!=0 && sudo[7][m]!=0 && sudo[6][m]!=p && sudo[7][m]!=p)sudo[8][m]=p;
							if(sudo[6][m]!=0 && sudo[8][m]!=0 && sudo[6][m]!=p && sudo[8][m]!=p)sudo[7][m]=p;
							if(sudo[7][m]!=0 && sudo[8][m]!=0 && sudo[7][m]!=p && sudo[8][m]!=p)sudo[6][m]=p;
						}

					}
				}
			}
		}
	}

	//5  
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=3;2<s && s<9;s++)
			{
				if(sudo[s][h]==p)
				{
					for(int a=0;a<2;a++)
					{
						if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
						if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
						if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
						if(a==1){x=m; m=n; n=x;}

						if(sudo[0][n]!=0 && sudo[1][n]!=0 && sudo[2][n]!=0 && sudo[0][n]!=p && sudo[1][n]!=p && sudo[2][n]!=p)
						{
							if(sudo[0][m]!=0 && sudo[1][m]!=0 && sudo[0][m]!=p && sudo[1][m]!=p)sudo[2][m]=p;
							if(sudo[0][m]!=0 && sudo[2][m]!=0 && sudo[0][m]!=p && sudo[2][m]!=p)sudo[1][m]=p;
							if(sudo[1][m]!=0 && sudo[2][m]!=0 && sudo[1][m]!=p && sudo[2][m]!=p)sudo[0][m]=p;
						}

					}
				}
			}
		}
	}


	//6
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0; s<3 ||(5<s && s<9);s++)
			{
				if(sudo[s][h]==p)
				{
					for(int a=0;a<2;a++)
					{
						if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
						if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
						if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}
						if(a==1){x=m; m=n; n=x;}

						if(sudo[3][n]!=0 && sudo[4][n]!=0 && sudo[5][n]!=0 && sudo[3][n]!=p && sudo[4][n]!=p && sudo[5][n]!=p)
						{
							if(sudo[3][m]!=0 && sudo[4][m]!=0 && sudo[3][m]!=p && sudo[4][m]!=p)sudo[5][m]=p;
							if(sudo[3][m]!=0 && sudo[5][m]!=0 && sudo[3][m]!=p && sudo[5][m]!=p)sudo[4][m]=p;
							if(sudo[4][m]!=0 && sudo[5][m]!=0 && sudo[4][m]!=p && sudo[5][m]!=p)sudo[3][m]=p;
						}

					}
				}
				if(s==2)s=5;
			}
		}
	}



}
void finalsudokuqt::method3()
{
	//function3
	//see3
	int n,m,n1,m1;

	for (int h=0;h<9;h++)

	{
		for (int p=1;p<10;p++)
		{

			for (int s=0;s<6;s++)
			{


				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=0;d<6;d++)
					{
						if (sudo[n][d]==p)
						{   
							for(int mm=6;5<mm && mm<9;mm++)
							{
								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
											if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
											if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[nn][mm]==p)
											{
												if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
												if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
												if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[nn][mm]==p)
												{
													if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
													if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
													if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
												}

											}

							}
						}
					}
				}
			}
		}
	}



	//1st 2
	for (int h=0;h<9;h++)

	{
		for (int p=1;p<10;p++)
		{

			for (int s=3;2<s&& s<9;s++)
			{


				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=3;2<d&& d<9;d++)
					{
						if (sudo[n][d]==p)
						{   
							for(int mm=0;mm<3;mm++)
							{
								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
											if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
											if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[nn][mm]==p)
											{
												if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
												if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
												if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[nn][mm]==p)
												{
													if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
													if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
													if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
												}

											}

							}
						}
					}
				}
			}
		}
	}

	//1st  3

	for (int h=0;h<9;h++)

	{
		for (int p=1;p<10;p++)
		{

			for (int s=0;s<3 || (5<s && s<9);s++)
			{


				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=0;d<3 || (5<d && d<9);d++)
					{
						if (sudo[n][d]==p)
						{   
							for(int mm=3;2<mm && mm<6;mm++)
							{
								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
											if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
											if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[nn][mm]==p)
											{
												if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
												if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
												if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[nn][mm]==p)
												{
													if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
													if(sudo[m][n1]!=p && sudo[m][n1]!=0 &&sudo[m][m1]==0){sudo[m][m1]=p;}
													if(sudo[m][m1]!=p && sudo[m][m1]!=0 &&sudo[m][n1]==0){sudo[m][n1]=p;}
												}

											}

							}
						}
						if(d==2)d=5;

					}
				}
				if(s==2)s=5;
			}

		}
	}


	//2nd 1


	//int n,m,n1,m1;

	for (int h=0;h<9;h++)

	{
		for (int p=1;p<10;p++)
		{

			for (int s=0;s<6;s++)
			{


				if(sudo[s][h]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=0;d<6;d++)
					{
						if (sudo[d][n]==p)
						{   
							for(int mm=6;5<mm && mm<9;mm++)
							{
								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[mm][nn]==p)
										{
											if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
											if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
											if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[mm][nn]==p)
											{
												if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
												if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
												if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[mm][nn]==p)
												{
													if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
													if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
													if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
												}

									  }

							}
						}
					}
				}
			}
		}
	}






	//2nd  2

	for (int h=0;h<9;h++)

	{
		for (int p=1;p<10;p++)
		{

			for (int s=3;2<s&& s<9;s++)
			{


				if(sudo[s][h]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=3;2<d && d<9;d++)
					{
						if (sudo[d][n]==p)
						{   
							for(int mm=0;mm<3;mm++)
							{
								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[mm][nn]==p)
										{
											if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
											if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
											if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[mm][nn]==p)
											{
												if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
												if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
												if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[mm][nn]==p)
												{
													if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
													if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
													if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
												}

											}

							}
						}
					}
				}
			}
		}
	}






	//2nd  3

	for (int h=0;h<9;h++)

	{
		for (int p=1;p<10;p++)
		{

			for (int s=0;s<3 || (5<s && s<9);s++)
			{


				if(sudo[s][h]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=0;d<3 || (5<d && d<9);d++)
					{
						if (sudo[d][n]==p)
						{   
							for(int mm=3;2<mm && mm<6;mm++)
							{
								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[mm][nn]==p)
										{
											if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
											if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
											if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[mm][nn]==p)
											{
												if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
												if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
												if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[mm][nn]==p)
												{
													if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
													if(sudo[n1][m]!=p && sudo[n1][m]!=0 &&sudo[m1][m]==0){sudo[m1][m]=p;}
													if(sudo[m1][m]!=p && sudo[m1][m]!=0 &&sudo[n1][m]==0){sudo[n1][m]=p;}
												}

											}

							}
						}
						if(d==2)d=5;

					}
				}
				if(s==2)s=5;
			}

		}
	}





}
void finalsudokuqt::method4()
{
	//4rd funtion

	int n,m,n1,m1;

	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<6;s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for(int mm=6;5<mm && mm<9;mm++)
					{
						if(h==0||h==1||h==2)
							for(int nn=3 ;2<nn && nn<9 ;nn++ )
							{
								if(sudo[nn][mm]==p)
								{
									if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
									if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
									if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
									if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
									if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
								}

							}

							if(h==3||h==4||h==5)
								for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
								{
									if(sudo[nn][mm]==p)
									{
										if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
										if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
										if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
										if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
										if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
									}
									if(nn==2)nn=5;
								}

								if(h==6||h==7||h==8)
									for(int nn=0;nn<6;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}
											if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
											if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
											if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
											if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
										}

									}

					}

				}
			}
		}
	}



	//1st2
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=3;2<s && s<9;s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for(int mm=0;mm<3;mm++)
					{
						if(h==0||h==1||h==2)
							for(int nn=3 ;2<nn && nn<9 ;nn++ )
							{
								if(sudo[nn][mm]==p)
								{
									if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
									if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
									if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
									if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
									if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
								}

							}

							if(h==3||h==4||h==5)
								for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
								{
									if(sudo[nn][mm]==p)
									{
										if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
										if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
										if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
										if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
										if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
									}
									if(nn==2)nn=5;
								}

								if(h==6||h==7||h==8)
									for(int nn=0;nn<6;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}
											if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
											if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
											if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
											if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
										}

									}

					}

				}
			}
		}
	}


	//1st3
	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<3 || (5<s && s<9);s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for(int mm=3;2<mm && mm<6;mm++)
					{
						if(h==0||h==1||h==2)
							for(int nn=3 ;2<nn && nn<9 ;nn++ )
							{
								if(sudo[nn][mm]==p)
								{
									if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
									if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
									if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
									if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
									if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
								}

							}

							if(h==3||h==4||h==5)
								for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
								{
									if(sudo[nn][mm]==p)
									{
										if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
										if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
										if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
										if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
										if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
									}
									if(nn==2)nn=5;
								}

								if(h==6||h==7||h==8)
									for(int nn=0;nn<6;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}
											if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][n1]!=0&&sudo[m][n1]!=p){sudo[m][m1]=p;}
											if(sudo[n][n1]!=0&&sudo[n][n1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p){sudo[m][n1]=p;}
											if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][n1]!=0&&sudo[n][n1]!=p){sudo[n][m1]=p;}
											if(sudo[m][n1]!=0&&sudo[m][n1]!=p&&sudo[m][m1]!=0&&sudo[m][m1]!=p&&sudo[n][m1]!=0&&sudo[n][m1]!=p){sudo[n][n1]=p;}
										}

									}

					}

				}
				if(s==2)s=5;
			}
		}
	}




}
void finalsudokuqt::method5()
{
	//5th funtion
	int k1=0,k3=0,x;
	for(int h=0;h<9;h++,k1=0)
	{
		for(int t=0;t<9;t++)
		{
			if(sudo[h][t]==0){k1++; x=t;}
		}


		if(k1==1)
		{ 
			for(int i=0;i<9;i++)
			{
				k3= k3+sudo[h][i];
			}

			if(k3==44)sudo[h][x]=1;  if(k3==43)sudo[h][x]=2;  if(k3==42)sudo[h][x]=3;
			if(k3==41)sudo[h][x]=4;  if(k3==40)sudo[h][x]=5;  if(k3==39)sudo[h][x]=6;  
			if(k3==38)sudo[h][x]=7;  if(k3==37)sudo[h][x]=8;  if(k3==36)sudo[h][x]=9;
			k3=0;
		}


	}



	//2nd

	for(int h=0;h<9;h++,k1=0)
	{
		for(int t=0;t<9;t++)
		{
			if(sudo[t][h]==0){k1++; x=t;}
		}


		if(k1==1)
		{ 
			for(int i=0;i<9;i++)
			{
				k3= k3+sudo[i][h];
			}

			if(k3==44)sudo[x][h]=1;  if(k3==43)sudo[x][h]=2;  if(k3==42)sudo[x][h]=3;
			if(k3==41)sudo[x][h]=4;  if(k3==40)sudo[x][h]=5;  if(k3==39)sudo[x][h]=6;  
			if(k3==38)sudo[x][h]=7;  if(k3==37)sudo[x][h]=8;  if(k3==36)sudo[x][h]=9;
			k3=0;
		}


	}




}
void finalsudokuqt::method6()
{
	//function6

	int s=0,h1,k3=0,x,x1;
	for(int h=0;h<3;h++,s=0,k3=0)
	{
		if(h==0)h1=0; if(h==1)h1=3; if(h==2)h1=6;
		for(;h1<9;h1++)
		{
			for(int r=0;r<3;r++)
			{
				if(sudo[h1][r]==0){s++;x=h1;x1=r;  }
				k3=k3+sudo[h1][r];
			}

			if(h1==2||h1==5)break;

		}
		if(s==1)
		{
			if(k3==44)sudo[x][x1]=1;  if(k3==43)sudo[x][x1]=2;  if(k3==42)sudo[x][x1]=3;
			if(k3==41)sudo[x][x1]=4;  if(k3==40)sudo[x][x1]=5;  if(k3==39)sudo[x][x1]=6;  
			if(k3==38)sudo[x][x1]=7;  if(k3==37)sudo[x][x1]=8;  if(k3==36)sudo[x][x1]=9;
			k3=0;

		}
	}


	//2


	for(int h=0;h<3;h++,s=0,k3=0)
	{
		if(h==0)h1=0; if(h==1)h1=3; if(h==2)h1=6;
		for(;h1<9;h1++)
		{
			for(int r=3;2<r && r<6;r++)
			{
				if(sudo[h1][r]==0){s++;x=h1;x1=r;  }
				k3=k3+sudo[h1][r];
			}

			if(h1==2||h1==5)break;

		}
		if(s==1)
		{
			if(k3==44)sudo[x][x1]=1;  if(k3==43)sudo[x][x1]=2;  if(k3==42)sudo[x][x1]=3;
			if(k3==41)sudo[x][x1]=4;  if(k3==40)sudo[x][x1]=5;  if(k3==39)sudo[x][x1]=6;  
			if(k3==38)sudo[x][x1]=7;  if(k3==37)sudo[x][x1]=8;  if(k3==36)sudo[x][x1]=9;
			k3=0;

		}
	}


	//3

	for(int h=0;h<3;h++,s=0,k3=0)
	{
		if(h==0)h1=0; if(h==1)h1=3; if(h==2)h1=6;
		for(;h1<9;h1++)
		{
			for(int r=6;5<r && r<9;r++)
			{
				if(sudo[h1][r]==0){s++;x=h1;x1=r;  }
				k3=k3+sudo[h1][r];
			}

			if(h1==2||h1==5)break;

		}
		if(s==1)
		{
			if(k3==44)sudo[x][x1]=1;  if(k3==43)sudo[x][x1]=2;  if(k3==42)sudo[x][x1]=3;
			if(k3==41)sudo[x][x1]=4;  if(k3==40)sudo[x][x1]=5;  if(k3==39)sudo[x][x1]=6;  
			if(k3==38)sudo[x][x1]=7;  if(k3==37)sudo[x][x1]=8;  if(k3==36)sudo[x][x1]=9;
			k3=0;

		}
	}




}
void finalsudokuqt::method7()
{
	//function 7

	int n,m,n1,m1;

	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<6;s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=0;d<6;d++)
					{
						if (sudo[n][d]==p)
						{   
							for(int mm=6;5<mm && mm<9;mm++)
							{
								if(mm==6){n1=7; m1=8;}   if(mm==7){n1=8; m1=6;}    if(mm==8){n1=6; m1=7;}

								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											for(int nn1=3 ;2<nn1 && nn1<9 ;nn1++)
												if(sudo[nn1][n1]==p)sudo[m][m1]=p;   

										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[nn][mm]==p)
											{
												for(int nn1=0;nn1<3 ||(5<nn1 && nn1<9);nn1++ )	
												{if(sudo[nn1][n1]==p)sudo[m][m1]=p; if(nn1==2)nn1=5;  }
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[nn][mm]==p)
												{
													for(int nn1=0;nn1<6;nn1++ )
														if(sudo[nn1][n1]==p)sudo[m][m1]=p; 
												}

											}

							}
						}
					}
				}
			}
		}
	}





	//2


	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=3;2<s && s<9;s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=3;2<d && d<9;d++)
					{
						if (sudo[n][d]==p)
						{   
							for(int mm=0;mm<3;mm++)
							{
								if(mm==0){n1=1; m1=2;}   if(mm==1){n1=2; m1=0;}    if(mm==2){n1=0; m1=1;}

								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											for(int nn1=3 ;2<nn1 && nn1<9 ;nn1++)
												if(sudo[nn1][n1]==p)sudo[m][m1]=p;   

										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[nn][mm]==p)
											{
												for(int nn1=0;nn1<3 ||(5<nn1 && nn1<9);nn1++ )	
												{if(sudo[nn1][n1]==p)sudo[m][m1]=p; if(nn1==2)nn1=5;  }
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[nn][mm]==p)
												{
													for(int nn1=0;nn1<6;nn1++ )
														if(sudo[nn1][n1]==p)sudo[m][m1]=p; 
												}

											}

							}
						}
					}
				}
			}
		}
	}

	//3

	for (int h=0;h<9;h++)
	{
		for (int p=1;p<10;p++)
		{
			for (int s=0;s<3||(5<s && s<9);s++)
			{
				if(sudo[h][s]==p)
				{
					if(h==0){n=1; m=2;}   if(h==1){n=2; m=0;}    if(h==2){n=0; m=1;}
					if(h==3){n=4; m=5;}   if(h==4){n=5; m=3;}    if(h==5){n=3; m=4;}
					if(h==6){n=7; m=8;}   if(h==7){n=8; m=6;}    if(h==8){n=6; m=7;}

					for (int d=0;d<3||(5<d && d<9);d++)
					{
						if (sudo[n][d]==p)
						{   
							for(int mm=3;2<mm && mm<6;mm++)
							{
								if(mm==3){n1=4; m1=5;}   if(mm==4){n1=5; m1=3;}    if(mm==5){n1=3; m1=4;}

								if(h==0||h==1||h==2)
									for(int nn=3 ;2<nn && nn<9 ;nn++ )
									{
										if(sudo[nn][mm]==p)
										{
											for(int nn1=3 ;2<nn1 && nn1<9 ;nn1++)
												if(sudo[nn1][n1]==p)sudo[m][m1]=p;   

										}

									}

									if(h==3||h==4||h==5)
										for(int nn=0;nn<3 ||(5<nn && nn<9);nn++ )
										{
											if(sudo[nn][mm]==p)
											{
												for(int nn1=0;nn1<3 ||(5<nn1 && nn1<9);nn1++ )	
												{if(sudo[nn1][n1]==p)sudo[m][m1]=p; if(nn1==2)nn1=5;  }
											}
											if(nn==2)nn=5;
										}

										if(h==6||h==7||h==8)
											for(int nn=0;nn<6;nn++ )
											{
												if(sudo[nn][mm]==p)
												{
													for(int nn1=0;nn1<6;nn1++ )
														if(sudo[nn1][n1]==p)sudo[m][m1]=p; 
												}

											}

							}
						}
						if(d==2)d=5;
					}
				}
				if(s==2)s=5;
			}
		}
	}



}
void finalsudokuqt::method8()
{
	//function 8,9  

	int j1=0,x1=0,x=0,s=0,h1,h2,n1,n2,m=0,m1=0,r1=0;
	for(int r1=0;r1<9;r1++,m1=0)
	{
		for(int r=1;r<10;r++,j1=0,x=0,m1=0)
		{
			if(sudo[0][r1]!=r&&sudo[1][r1]!=r&&sudo[2][r1]!=r&&sudo[3][r1]!=r&&sudo[4][r1]!=r&&sudo[5][r1]!=r&&sudo[6][r1]!=r&&sudo[7][r1]!=r&&sudo[8][r1]!=r)
			{	
				for(int k=0;k<9;k++)
				{if(sudo[k][r1]==0)j1++;}


				for(int l=0;l<9;l++,s=0)
				{
					if(sudo[l][r1]==0)
					{
						if(r1==0){h1=1; h2=2;}  if(r1==1){h1=2; h2=0;}  if(r1==2){h1=0; h2=1;}  
						if(r1==3){h1=4; h2=5;}  if(r1==4){h1=5; h2=3;}  if(r1==5){h1=3; h2=4;}  
						if(r1==6){h1=7; h2=8;}  if(r1==7){h1=8; h2=6;}  if(r1==8){h1=6; h2=7;} 

						if(l==0){n1=1; n2=2;}   if(l==1){n1=2; n2=0;}  if(l==2){n1=0; n2=1;}  
						if(l==3){n1=4; n2=5;}   if(l==4){n1=5; n2=3;}  if(l==5){n1=3; n2=4;}  
						if(l==6){n1=7; n2=8;}   if(l==7){n1=8; n2=6;}  if(l==8){n1=6; n2=7;} 

						if(r1==0||r1==1||r1==2)
						{				
							for(int a=3;2<a&&a<9;a++)
							{
								if(sudo[l][a]!=r)s++;
								if(sudo[l][a]==r&&sudo[l][h1]!=r &&sudo[l][h2]!=r &&sudo[n1][h1]!=r && sudo[n2][h1]!=r &&sudo[n1][h2]!=r &&sudo[n2][h2]!=r )x++;

								if(s==6)
								{
									if(sudo[l][h1]!=r &&sudo[l][h2]!=r &&sudo[n1][h1]!=r && sudo[n2][h1]!=r &&sudo[n1][h2]!=r &&sudo[n2][h2]!=r ){x1=l;}

									if( sudo[l][h1]==r || sudo[l][h2]==r ||sudo[n1][h1]==r || sudo[n2][h1]==r ||sudo[n1][h2]==r ||sudo[n2][h2]==r  )
									{
										if(m1==0)
										{
											if(sudo[n1][r1]!=0 && sudo[n2][r1]==0){x+=2;} 
											if(sudo[n1][r1]==0 && sudo[n2][r1]!=0){x+=2;}
											if(sudo[n1][r1]==0 && sudo[n2][r1]==0){x+=3;} 
											if(sudo[n1][r1]!=0 && sudo[n2][r1]!=0){x++;}
											m1=1;
										}

								 }


							 }



							}



						}
						//======================================================================================================

						if(r1==3||r1==4||r1==5)
							for(int a=0;a<3||(5<a&&a<9);a++)
							{
								if(sudo[l][a]!=r)s++;
								if(sudo[l][a]==r&&sudo[l][h1]!=r &&sudo[l][h2]!=r &&sudo[n1][h1]!=r && sudo[n2][h1]!=r &&sudo[n1][h2]!=r &&sudo[n2][h2]!=r )x++;


								if(s==6)
								{
									if(sudo[l][h1]!=r &&sudo[l][h2]!=r &&sudo[n1][h1]!=r && sudo[n2][h1]!=r &&sudo[n1][h2]!=r &&sudo[n2][h2]!=r ){x1=l;}


									if( sudo[l][h1]==r || sudo[l][h2]==r ||sudo[n1][h1]==r || sudo[n2][h1]==r ||sudo[n1][h2]==r ||sudo[n2][h2]==r  )
									{
										if(m1==0)
										{
											if(sudo[n1][r1]!=0 && sudo[n2][r1]==0){x+=2;} 
											if(sudo[n1][r1]==0 && sudo[n2][r1]!=0){x+=2;}
											if(sudo[n1][r1]==0 && sudo[n2][r1]==0){x+=3;} 
											if(sudo[n1][r1]!=0 && sudo[n2][r1]!=0){x++;}
											m1=1;
										}

									}
								}

								if(a==2)a=5;

							}


							//===============================================================================================


							if(r1==6||r1==7||r1==8)
								for(int a=0;a<6;a++)
								{
									if(sudo[l][a]!=r)s++;
									if(sudo[l][a]==r&&sudo[l][h1]!=r &&sudo[l][h2]!=r &&sudo[n1][h1]!=r && sudo[n2][h1]!=r &&sudo[n1][h2]!=r &&sudo[n2][h2]!=r )x++;


									if(s==6)
									{
										if(sudo[l][h1]!=r &&sudo[l][h2]!=r &&sudo[n1][h1]!=r && sudo[n2][h1]!=r &&sudo[n1][h2]!=r &&sudo[n2][h2]!=r ){x1=l;}

										if( sudo[l][h1]==r || sudo[l][h2]==r ||sudo[n1][h1]==r || sudo[n2][h1]==r ||sudo[n1][h2]==r ||sudo[n2][h2]==r  )
										{
											if(m1==0)
											{
												if(sudo[n1][r1]!=0 && sudo[n2][r1]==0){x+=2;} 
												if(sudo[n1][r1]==0 && sudo[n2][r1]!=0){x+=2;}
												if(sudo[n1][r1]==0 && sudo[n2][r1]==0){x+=3;} 
												if(sudo[n1][r1]!=0 && sudo[n2][r1]!=0){x++;}
												m1=1;
											}

										}


									}



								}


					}

				}
				if(x1!=10)
				{
					if(j1==7&&x==6)sudo[x1][r1]=r;  if(j1==6&&x==5)sudo[x1][r1]=r;   if(j1==5&&x==4)sudo[x1][r1]=r;  
					if(j1==4&&x==3)sudo[x1][r1]=r;  if(j1==3&&x==2)sudo[x1][r1]=r;   if(j1==2&&x==1)sudo[x1][r1]=r;  
					x1=10;
				}

			}


		}

	}
	////======================================================================================================================================

	// 2nd part
	for(int r1=0;r1<9;r1++,m1=0)
	{
		for(int r=1;r<10;r++,j1=0,x=0,m1=0)
		{
			if(sudo[r1][0]!=r&&sudo[r1][1]!=r&&sudo[r1][2]!=r&&sudo[r1][3]!=r&&sudo[r1][4]!=r&&sudo[r1][5]!=r&&sudo[r1][6]!=r&&sudo[r1][7]!=r&&sudo[r1][8]!=r)
			{	
				for(int k=0;k<9;k++)
				{if(sudo[r1][k]==0)j1++;}


				for(int l=0;l<9;l++,s=0)
				{
					if(sudo[r1][l]==0)
					{
						if(r1==0){h1=1; h2=2;}  if(r1==1){h1=2; h2=0;}  if(r1==2){h1=0; h2=1;}  
						if(r1==3){h1=4; h2=5;}  if(r1==4){h1=5; h2=3;}  if(r1==5){h1=3; h2=4;}  
						if(r1==6){h1=7; h2=8;}  if(r1==7){h1=8; h2=6;}  if(r1==8){h1=6; h2=7;} 

						if(l==0){n1=1; n2=2;}   if(l==1){n1=2; n2=0;}  if(l==2){n1=0; n2=1;}  
						if(l==3){n1=4; n2=5;}   if(l==4){n1=5; n2=3;}  if(l==5){n1=3; n2=4;}  
						if(l==6){n1=7; n2=8;}   if(l==7){n1=8; n2=6;}  if(l==8){n1=6; n2=7;} 

						if(r1==0||r1==1||r1==2)
						{				
							for(int a=3;2<a&&a<9;a++)
							{
								if(sudo[a][l]!=r)s++;
								if(sudo[a][l]==r&&sudo[h1][l]!=r &&sudo[h2][l]!=r &&sudo[h1][n1]!=r && sudo[h1][n2]!=r &&sudo[h2][n1]!=r &&sudo[h2][n2]!=r )x++;


								if(s==6)
								{
									if(sudo[h1][l]!=r &&sudo[h2][l]!=r &&sudo[h1][n1]!=r && sudo[h1][n2]!=r &&sudo[h2][n1]!=r &&sudo[h2][n2]!=r ){x1=l;}

									if( sudo[h1][l]==r || sudo[h2][l]==r ||sudo[h1][n1]==r || sudo[h1][n2]==r ||sudo[h2][n1]==r ||sudo[h2][n2]==r )
									{
										if(m1==0)
										{
											if(sudo[r1][n1]!=0 && sudo[r1][n2]==0){x+=2;} 
											if(sudo[r1][n1]==0 && sudo[r1][n2]!=0){x+=2;}
											if(sudo[r1][n1]==0 && sudo[r1][n2]==0){x+=3;} 
											if(sudo[r1][n1]!=0 && sudo[r1][n2]!=0){x++;}
											m1=1;
										}

									}


								}



							}



						}
						//======================================================================================================

						if(r1==3||r1==4||r1==5)
							for(int a=0;a<3||(5<a&&a<9);a++)
							{
								if(sudo[a][l]!=r)s++;
								if(sudo[a][l]==r&&sudo[h1][l]!=r &&sudo[h2][l]!=r &&sudo[h1][n1]!=r && sudo[h1][n2]!=r &&sudo[h2][n1]!=r &&sudo[h2][n2]!=r )x++;

								if(s==6)
								{
									if(sudo[h1][l]!=r &&sudo[h2][l]!=r &&sudo[h1][n1]!=r && sudo[h1][n2]!=r &&sudo[h2][n1]!=r &&sudo[h2][n2]!=r ){x1=l;}

									if( sudo[h1][l]==r || sudo[h2][l]==r ||sudo[h1][n1]==r || sudo[h1][n2]==r ||sudo[h2][n1]==r ||sudo[h2][n2]==r )
									{
										if(m1==0)
										{
											if(sudo[r1][n1]!=0 && sudo[r1][n2]==0){x+=2;} 
											if(sudo[r1][n1]==0 && sudo[r1][n2]!=0){x+=2;}
											if(sudo[r1][n1]==0 && sudo[r1][n2]==0){x+=3;} 
											if(sudo[r1][n1]!=0 && sudo[r1][n2]!=0){x++;}
											m1=1;
										}

									}
								}

								if(a==2)a=5;

							}


							//===============================================================================================


							if(r1==6||r1==7||r1==8)
								for(int a=0;a<6;a++)
								{
									if(sudo[a][l]!=r)s++;
									if(sudo[a][l]==r&&sudo[h1][l]!=r &&sudo[h2][l]!=r &&sudo[h1][n1]!=r && sudo[h1][n2]!=r &&sudo[h2][n1]!=r &&sudo[h2][n2]!=r )x++;


									if(s==6)
									{
										if(sudo[h1][l]!=r &&sudo[h2][l]!=r &&sudo[h1][n1]!=r && sudo[h1][n2]!=r &&sudo[h2][n1]!=r &&sudo[h2][n2]!=r ){x1=l;}

										if( sudo[h1][l]==r || sudo[h2][l]==r ||sudo[h1][n1]==r || sudo[h1][n2]==r ||sudo[h2][n1]==r ||sudo[h2][n2]==r )
										{
											if(m1==0)
											{
												if(sudo[r1][n1]!=0 && sudo[r1][n2]==0){x+=2;} 
												if(sudo[r1][n1]==0 && sudo[r1][n2]!=0){x+=2;}
												if(sudo[r1][n1]==0 && sudo[r1][n2]==0){x+=3;} 
												if(sudo[r1][n1]!=0 && sudo[r1][n2]!=0){x++;}
												m1=1;
											}

										}


									}



								}


					}

				}
				if(x1!=10)
				{

					if(j1==7&&x==6)sudo[r1][x1]=r;  if(j1==6&&x==5)sudo[r1][x1]=r;   if(j1==5&&x==4)sudo[r1][x1]=r;  
					if(j1==4&&x==3)sudo[r1][x1]=r;  if(j1==3&&x==2)sudo[r1][x1]=r;   if(j1==2&&x==1)sudo[r1][x1]=r;  
					x1=10;
				}

			}


		}

	}




}
