#define _CRT_SECURE_NO_WARNINGS
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<Windows.h>
#include <QMessageBox>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QProgressBar>
#include <QComboBox>
#include <QPushButton>
#include <QGridLayout>
#include<stdio.h>
#include<stdlib.h>
#include<sourse.h>
#pragma once


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/**************\
 * ui->progressBar->setValue(i);
 * ui->progressBar_2->setValue(j);
 * ui->textBrowser->insertPlainText("progress finished\n");
\**************/
void MainWindow::on_pushButton_clicked()
{
    FILE* ERRORf1 =freopen("error.log","w+",stderr);
    //QMessageBox::information(NULL,  "本程序信息",  "本程序由刘仁宇编写\n版本号：version8.0.1\n程序支持：Qt\nGUI界面支持：Qt6.1.3\n编译支持：Qt cteator\n", QMessageBox::Yes);
    ui->progressBar_2->setValue(0);
    FILE* f1=fopen("Qt6Widgets.dll","rb");
    if(f1==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Widgets.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Widgets.dll\n");
        fclose(f1);
    }
    ui->progressBar_2->setValue(1);
    FILE* f2=fopen("Qt6Svg.dll","rb");
    if(f2==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Svg.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Svg.dll\n");
        fclose(f2);
    }
    ui->progressBar_2->setValue(2);
    FILE* f3=fopen("Qt6Gui.dll","rb");
    if(f3==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Gui.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Gui.dll\n");
        fclose(f3);
    }
    ui->progressBar_2->setValue(3);
    FILE* f4=fopen("Qt6Core.dll","rb");
    if(f4==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Core.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Core.dll\n");
        fclose(f4);
    }
    ui->progressBar_2->setValue(4);
    FILE* f5=fopen("opengl32sw.dll","rb");
    if(f5==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:openql32sw.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:openql32sw.dll\n");
        fclose(f5);
    }
    ui->progressBar_2->setValue(5);
    FILE* f6=fopen("D3Dcompiler_47.dll","rb");
    if(f6==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:D3Dcompiler_47.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:D3Dcompiler_47.dll\n");
        fclose(f6);
    }
    ui->progressBar_2->setValue(6);
    ui->textBrowser->insertPlainText("begin to search translation files\n");
    FILE* f7=fopen("translations\\qt_ar.qm","rb");
    if(f7==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ar.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ar.qm\n");
        fclose(f7);
    }
    ui->progressBar_2->setValue(7);
    FILE* f8=fopen("translations\\qt_bg.qm","rb");
    if(f8==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_bg.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_bg.qm\n");
        fclose(f8);
    }
    ui->progressBar_2->setValue(8);
    FILE* f9=fopen("translations\\qt_ca.qm","rb");
    if(f9==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ca.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ca.qm\n");
        fclose(f9);
    }
    ui->progressBar_2->setValue(9);
    FILE* f10=fopen("translations\\qt_cs.qm","rb");
    if(f10==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_cs.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_cs.qm\n");
        fclose(f10);
    }
    ui->progressBar_2->setValue(10);
    FILE* f11=fopen("translations\\qt_da.qm","rb");
    if(f11==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_da.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_da.qm\n");
        fclose(f11);
    }
    ui->progressBar_2->setValue(11);
    FILE* f12=fopen("translations\\qt_de.qm","rb");
    if(f12==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_de.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_de.qm\n");
        fclose(f12);
    }
    ui->progressBar_2->setValue(12);
    FILE* f13=fopen("translations\\qt_en.qm","rb");
    if(f13==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_en.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_en.qm\n");
        fclose(f13);
    }
    ui->progressBar_2->setValue(13);
    FILE* f14=fopen("translations\\qt_es.qm","rb");
    if(f14==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_es.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_es.qm\n");
        fclose(f14);
    }
    ui->progressBar_2->setValue(14);
    FILE* f15=fopen("translations\\qt_fa.qm","rb");
    if(f15==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_fa.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_fa.qm\n");
        fclose(f15);
    }
    ui->progressBar_2->setValue(15);
    FILE* f16=fopen("translations\\qt_fi.qm","rb");
    if(f16==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_fi.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_fi.qm\n");
        fclose(f16);
    }
    ui->progressBar_2->setValue(16);
    FILE* f17=fopen("translations\\qt_fr.qm","rb");
    if(f17==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_fr.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_fr.qm\n");
        fclose(f17);
    }
    ui->progressBar_2->setValue(17);
    FILE* f18=fopen("translations\\qt_gd.qm","rb");
    if(f18==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_gd.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_gd.qm\n");
        fclose(f18);
    }
    ui->progressBar_2->setValue(18);
    FILE* f19=fopen("translations\\qt_he.qm","rb");
    if(f19==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_he.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_he.qm\n");
        fclose(f19);
    }
    ui->progressBar_2->setValue(19);
    FILE* f20=fopen("translations\\qt_hr.qm","rb");
    if(f20==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_hr.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_hr.qm\n");
        fclose(f20);
    }
    ui->progressBar_2->setValue(20);
    FILE* f21=fopen("translations\\qt_hu.qm","rb");
    if(f21==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_hu.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_hu.qm\n");
        fclose(f21);
    }
    ui->progressBar_2->setValue(21);
    FILE* f22=fopen("translations\\qt_it.qm","rb");
    if(f22==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_it.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_it.qm\n");
        fclose(f22);
    }
    ui->progressBar_2->setValue(22);
    FILE* f23=fopen("translations\\qt_ja.qm","rb");
    if(f23==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ja.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ja.qm\n");
        fclose(f23);
    }
    ui->progressBar_2->setValue(23);
    FILE* f24=fopen("translations\\qt_ko.qm","rb");
    if(f24==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ko.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ko.qm\n");
        fclose(f24);
    }
    ui->progressBar_2->setValue(24);
    FILE* f25=fopen("translations\\qt_lv.qm","rb");
    if(f25==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_lv.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_lv.qm\n");
        fclose(f25);
    }
    ui->progressBar_2->setValue(25);
    FILE* f26=fopen("translations\\qt_nl.qm","rb");
    if(f26==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_nl.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_nl.qm\n");
        fclose(f26);
    }
    ui->progressBar_2->setValue(26);
    FILE* f27=fopen("translations\\qt_nn.qm","rb");
    if(f27==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_nn.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_nn.qm\n");
        fclose(f27);
    }
    ui->progressBar_2->setValue(27);
    FILE* f28=fopen("translations\\qt_pl.qm","rb");
    if(f28==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_pl.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_pl.qm\n");
        fclose(f28);
    }
    ui->progressBar_2->setValue(28);
    FILE* f29=fopen("translations\\qt_pt_BR.qm","rb");
    if(f29==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_pt_BR.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_pt_BR.qm\n");
        fclose(f29);
    }
    ui->progressBar_2->setValue(29);
    FILE* f30=fopen("translations\\qt_ru.qm","rb");
    if(f30==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ru.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ar.qm\n");
        fclose(f30);
    }
    ui->progressBar_2->setValue(30);
    FILE* f31=fopen("translations\\qt_sk.qm","rb");
    if(f31==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_sk.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_sk.qm\n");
        fclose(f31);
    }
    ui->progressBar_2->setValue(31);
    FILE* f32=fopen("translations\\qt_tr.qm","rb");
    if(f32==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_tr.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_tr.qm\n");
        fclose(f32);
    }
    ui->progressBar_2->setValue(32);
    FILE* f33=fopen("translations\\qt_uk.qm","rb");
    if(f33==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_uk.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_uk.qm\n");
        fclose(f33);
    }
    ui->progressBar_2->setValue(33);
    FILE* f34=fopen("translations\\qt_zh_CN.qm","rb");
    if(f34==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_zh_CN.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_zh_CN.qm\n");
        fclose(f34);
    }
    ui->progressBar_2->setValue(34);
    FILE* f35=fopen("translations\\qt_zh_TW.qm","rb");
    if(f35==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_zh_TW.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_zh_TW.qm\n");
        fclose(f35);
    }
    ui->progressBar_2->setValue(35);
    ui->textBrowser->insertPlainText("search translation files finished\n");
    FILE* f36=fopen("styles\\qwindowsvistastyle.dll","rb");
    if(f36==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:styles\\qwindowsvistastyle.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:styles\\qwindowsvistastyle.dll\n");
        fclose(f36);
    }
    ui->progressBar_2->setValue(36);
    FILE* f37=fopen("platforms\\qwindows.dll","rb");
    if(f37==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:platforms\\qwindows.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:platforms\\qwindows.dll\n");
        fclose(f37);
    }
    ui->progressBar_2->setValue(37);
    FILE* f38=fopen("imageformats\\qgif.dll","rb");
    if(f38==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qgit.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qgit.dll\n");
        fclose(f38);
    }
    ui->progressBar_2->setValue(38);
    FILE* f39=fopen("imageformats\\qicns.dll","rb");
    if(f39==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qgit.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qgit.dll\n");
        fclose(f39);
    }
    ui->progressBar_2->setValue(39);
    FILE* f40=fopen("imageformats\\qico.dll","rb");
    if(f40==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qico.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qico.dll\n");
        fclose(f40);
    }
    ui->progressBar_2->setValue(40);
    FILE* f41=fopen("imageformats\\qjpeg.dll","rb");
    if(f41==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qjpeg.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qjepg.dll\n");
        fclose(f41);
    }
    ui->progressBar_2->setValue(41);
    FILE* f42=fopen("imageformats\\qsvg.dll","rb");
    if(f42==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qsvg.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qsvg.dll\n");
        fclose(f42);
    }
    ui->progressBar_2->setValue(42);
    FILE* f43=fopen("imageformats\\qtga.dll","rb");
    if(f43==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qtga.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qtga.dll\n");
        fclose(f43);
    }
    ui->progressBar_2->setValue(43);
    FILE* f44=fopen("imageformats\\qtiff.dll","rb");
    if(f44==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qtiff.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ar.qm\n");
        fclose(f44);
    }
    ui->progressBar_2->setValue(44);
    FILE* f45=fopen("imageformats\\qwbmp.dll","rb");
    if(f45==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qwbmp.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qwbmp.dll\n");
        fclose(f45);
    }
    ui->progressBar_2->setValue(45);
    FILE* f46=fopen("imageformats\\qwebp.dll","rb");
    if(f46==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qwebp.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qwebp.dll\n");
        fclose(f46);
    }
    ui->progressBar_2->setValue(46);
    FILE* f47=fopen("iconengines\\qsvgicon.dll","rb");
    if(f47==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:iconengines\\qsvgicon.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:iconengines\\qsvgicon.dll\n");
        fclose(f47);
    }
    ui->progressBar_2->setValue(47);
    FILE* f48=fopen("script\\model.dll","rb");
    if(f48==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\model.dll\n");
        ui->textBrowser->insertPlainText("WARNING!!! if you do not have this file,you can not start self classification\n");
        QMessageBox::information(NULL,  "警告",  "没有模型文件，本程序无法进行自动分类操作", QMessageBox::Yes);
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file :script\\model.dll\n");
        fclose(f48);
    }
    ui->progressBar_2->setValue(48);
    FILE* f49=fopen("script\\Data_Pre.py","rb");
    if(f49==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\Data_Pre.py\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\Data_Pre.py\n");
        fclose(f49);
    }
    ui->progressBar_2->setValue(49);
    FILE* f50=fopen("script\\resnet.py","rb");
    if(f50==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\resnet.py\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\resnet.py\n");
        fclose(f50);
    }
    ui->progressBar_2->setValue(50);
    FILE* f51=fopen("script\\Test_model.dll","rb");
    if(f51==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\Test_model.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\Test_model.dll\n");
        fclose(f51);
    }
    ui->progressBar_2->setValue(51);
    FILE* f52=fopen("script\\train.dll","rb");
    if(f52==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\train.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\train.dll\n");
        fclose(f52);
    }
    ui->progressBar_2->setValue(52);
    FILE* f53=fopen("script\\utils.py","rb");
    if(f53==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\utils.py\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\utils.py\n");
        fclose(f53);
    }
    ui->progressBar_2->setValue(53);
    ui->textBrowser->insertPlainText("begin to check python environment\n");
    //system("pip");
    wchar_t ch[]=L"open";
    wchar_t ch1[]=L"cmd.exe";
    wchar_t ch2[]=L"pip";
    ShellExecute(NULL,ch,ch1,ch2,NULL,0);
    FILE* f54 = fopen("error.log", "rb");
    if (f54 != NULL)
    {
        char ch[100] = { '\0' };
        fgets(ch, 10, f1);
        if (ch[0] == 39)
        {
            ui->textBrowser->insertPlainText("there are no python on your computer,please install python and add it to %PATH%\n");
            QMessageBox::information(NULL,  "错误",  "由于本机无python环境，本程序无法继续执行代码，请安装python后重试(点击确定退出本程序)", QMessageBox::Yes);
            fclose(f1);
            exit(0);
        }
        fclose(f1);
    }
    ui->progressBar->setValue(1);
    ui->textBrowser->insertPlainText("successfully found existing python environment on your computer\n");
    ui->textBrowser->insertPlainText("we will find the script this program need in your computer if not exist,we will download from python.org\n");
    ui->textBrowser->insertPlainText("finding torch in your computer,please wait\n");
    //system("pip install torch");
    wchar_t str[]=L"open";
    wchar_t str1[]=L"cmd.exe";
    wchar_t str2[]=L"pip install torch";
    ShellExecute(NULL,str,str1,str2,NULL,0);
    ui->textBrowser->insertPlainText("find torch ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(2);
    ui->textBrowser->insertPlainText("finding torchvision in your computer,please wait\n");
    //system("pip install torchvision");
    wchar_t str3[]=L"pip install torchvision";
    ShellExecute(NULL,str,str1,str3,NULL,0);
    ui->textBrowser->insertPlainText("find torchvision ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(3);
    ui->textBrowser->insertPlainText("finding matplotlib in your computer,please wait\n");
    //system("pip install matplotlib");
    wchar_t str4[]=L"pip install matplotlib";
    ShellExecute(NULL,str,str1,str4,NULL,0);
    ui->textBrowser->insertPlainText("find matplotlib ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(4);
    ui->textBrowser->insertPlainText("finding visdom in your computer,please wait");
    //system("pip install visdom");
    wchar_t str5[]=L"pip install visdom";
    ShellExecute(NULL,str,str1,str5,NULL,0);
    ui->textBrowser->insertPlainText("find visdom ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(5);
    ui->textBrowser->insertPlainText("congratulations!\nfiles checking finished\n");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(NULL,  "提示",  "我们将要退出本程序，点击确定以继续 ", QMessageBox::Yes);
    exit(0);
}


void MainWindow::on_progressBar_valueChanged(int value)
{
//donnot write in this function
}


void MainWindow::on_progressBar_2_valueChanged(int value)
{
//donot write in this function
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(NULL,  "本程序信息",  "本程序由刘仁宇编写\n版本号：version8.0.1\n程序支持：Qt\nGUI界面支持：Qt6.1.3\n编译支持：Qt cteator\n", QMessageBox::Yes);
}



void MainWindow::on_pushButton_5_clicked()
{
    FILE* f1=fopen("script\\Data_Pre.py","rb");
    if(f1==NULL)
    {
        ui->textBrowser->insertPlainText("begin to fix the file:scripts\\Data_Pre.py\n");
        fix_file_Data_Pre();
        ui->textBrowser->insertPlainText("successfully fix the file:scripts\\Data_Pre.py\n");
    }
    else
    {
        fclose(f1);
    }
    FILE* f2=fopen("script\\resnet.py","rb");
    if(f2==NULL)
    {
        ui->textBrowser->insertPlainText("begin to fix the file:scripts\\resnet.py\n");
        fix_file_resnet();
        ui->textBrowser->insertPlainText("successfully fix the file:scripts\\resnet.py\n");
    }
    else
    {
        fclose(f2);
    }
    FILE* f3=fopen("script\\Test_model.dll","rb");
    if(f3==NULL)
    {
        ui->textBrowser->insertPlainText("begin to fix the file:scripts\\Test_model.dll\n");
        fix_file_Test_model();
        ui->textBrowser->insertPlainText("successfully fix the file:scripts\\Test_model.dll\n");
    }
    else
    {
        fclose(f3);
    }
    FILE* f4=fopen("script\\train.dll","rb");
    if(f4==NULL)
    {
        ui->textBrowser->insertPlainText("begin to fix the file:scripts\\train.dll\n");
        fix_file_train();
        ui->textBrowser->insertPlainText("successfully fix the file:scripts\\train.dll\n");
    }
    else
    {
        fclose(f4);
    }
    FILE* f5=fopen("script\\utils.py","rb");
    if(f5==NULL)
    {
        ui->textBrowser->insertPlainText("begin to fix the file:scripts\\utils.py\n");
        fix_file_utils();
        ui->textBrowser->insertPlainText("successfully fix the file:scripts\\utils.py\n");
    }
    else
    {
        fclose(f5);
    }
    FILE* f6=fopen("readme.txt","rb");
    if(f6==NULL)
    {
        ui->textBrowser->insertPlainText("begin to update readme.txt");
        fix_file_readme();
        ui->textBrowser->insertPlainText("successfully updated readme.txt");
    }
    else
    {
        fclose(f6);
    }
    ui->textBrowser->insertPlainText("begin to update the file:updatedata.txt");
    fix_file_update_data();
    ui->textBrowser->insertPlainText("update successfully");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->insertPlainText("成功启动主程序：自动垃圾分类...即将开始操作\n");
    ui->textBrowser->insertPlainText("开始检查文件，请稍后...这可能需要一段时间...\n");
    ui->progressBar_2->setValue(0);
    FILE* f1=fopen("Qt6Widgets.dll","rb");
    if(f1==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Widgets.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Widgets.dll\n");
        fclose(f1);
    }
    ui->progressBar_2->setValue(1);
    FILE* f2=fopen("Qt6Svg.dll","rb");
    if(f2==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Svg.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Svg.dll\n");
        fclose(f2);
    }
    ui->progressBar_2->setValue(2);
    FILE* f3=fopen("Qt6Gui.dll","rb");
    if(f3==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Gui.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Gui.dll\n");
        fclose(f3);
    }
    ui->progressBar_2->setValue(3);
    FILE* f4=fopen("Qt6Core.dll","rb");
    if(f4==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:Qt6Core.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:Qt6Core.dll\n");
        fclose(f4);
    }
    ui->progressBar_2->setValue(4);
    FILE* f5=fopen("opengl32sw.dll","rb");
    if(f5==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:openql32sw.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:openql32sw.dll\n");
        fclose(f5);
    }
    ui->progressBar_2->setValue(5);
    FILE* f6=fopen("D3Dcompiler_47.dll","rb");
    if(f6==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:D3Dcompiler_47.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:D3Dcompiler_47.dll\n");
        fclose(f6);
    }
    ui->progressBar_2->setValue(6);
    ui->textBrowser->insertPlainText("begin to search translation files\n");
    FILE* f7=fopen("translations\\qt_ar.qm","rb");
    if(f7==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ar.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ar.qm\n");
        fclose(f7);
    }
    ui->progressBar_2->setValue(7);
    FILE* f8=fopen("translations\\qt_bg.qm","rb");
    if(f8==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_bg.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_bg.qm\n");
        fclose(f8);
    }
    ui->progressBar_2->setValue(8);
    FILE* f9=fopen("translations\\qt_ca.qm","rb");
    if(f9==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ca.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ca.qm\n");
        fclose(f9);
    }
    ui->progressBar_2->setValue(9);
    FILE* f10=fopen("translations\\qt_cs.qm","rb");
    if(f10==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_cs.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_cs.qm\n");
        fclose(f10);
    }
    ui->progressBar_2->setValue(10);
    FILE* f11=fopen("translations\\qt_da.qm","rb");
    if(f11==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_da.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_da.qm\n");
        fclose(f11);
    }
    ui->progressBar_2->setValue(11);
    FILE* f12=fopen("translations\\qt_de.qm","rb");
    if(f12==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_de.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_de.qm\n");
        fclose(f12);
    }
    ui->progressBar_2->setValue(12);
    FILE* f13=fopen("translations\\qt_en.qm","rb");
    if(f13==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_en.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_en.qm\n");
        fclose(f13);
    }
    ui->progressBar_2->setValue(13);
    FILE* f14=fopen("translations\\qt_es.qm","rb");
    if(f14==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_es.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_es.qm\n");
        fclose(f14);
    }
    ui->progressBar_2->setValue(14);
    FILE* f15=fopen("translations\\qt_fa.qm","rb");
    if(f15==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_fa.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_fa.qm\n");
        fclose(f15);
    }
    ui->progressBar_2->setValue(15);
    FILE* f16=fopen("translations\\qt_fi.qm","rb");
    if(f16==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_fi.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_fi.qm\n");
        fclose(f16);
    }
    ui->progressBar_2->setValue(16);
    FILE* f17=fopen("translations\\qt_fr.qm","rb");
    if(f17==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_fr.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_fr.qm\n");
        fclose(f17);
    }
    ui->progressBar_2->setValue(17);
    FILE* f18=fopen("translations\\qt_gd.qm","rb");
    if(f18==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_gd.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_gd.qm\n");
        fclose(f18);
    }
    ui->progressBar_2->setValue(18);
    FILE* f19=fopen("translations\\qt_he.qm","rb");
    if(f19==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_he.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_he.qm\n");
        fclose(f19);
    }
    ui->progressBar_2->setValue(19);
    FILE* f20=fopen("translations\\qt_hr.qm","rb");
    if(f20==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_hr.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_hr.qm\n");
        fclose(f20);
    }
    ui->progressBar_2->setValue(20);
    FILE* f21=fopen("translations\\qt_hu.qm","rb");
    if(f21==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_hu.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_hu.qm\n");
        fclose(f21);
    }
    ui->progressBar_2->setValue(21);
    FILE* f22=fopen("translations\\qt_it.qm","rb");
    if(f22==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_it.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_it.qm\n");
        fclose(f22);
    }
    ui->progressBar_2->setValue(22);
    FILE* f23=fopen("translations\\qt_ja.qm","rb");
    if(f23==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ja.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ja.qm\n");
        fclose(f23);
    }
    ui->progressBar_2->setValue(23);
    FILE* f24=fopen("translations\\qt_ko.qm","rb");
    if(f24==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ko.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ko.qm\n");
        fclose(f24);
    }
    ui->progressBar_2->setValue(24);
    FILE* f25=fopen("translations\\qt_lv.qm","rb");
    if(f25==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_lv.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_lv.qm\n");
        fclose(f25);
    }
    ui->progressBar_2->setValue(25);
    FILE* f26=fopen("translations\\qt_nl.qm","rb");
    if(f26==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_nl.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_nl.qm\n");
        fclose(f26);
    }
    ui->progressBar_2->setValue(26);
    FILE* f27=fopen("translations\\qt_nn.qm","rb");
    if(f27==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_nn.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_nn.qm\n");
        fclose(f27);
    }
    ui->progressBar_2->setValue(27);
    FILE* f28=fopen("translations\\qt_pl.qm","rb");
    if(f28==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_pl.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_pl.qm\n");
        fclose(f28);
    }
    ui->progressBar_2->setValue(28);
    FILE* f29=fopen("translations\\qt_pt_BR.qm","rb");
    if(f29==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_pt_BR.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_pt_BR.qm\n");
        fclose(f29);
    }
    ui->progressBar_2->setValue(29);
    FILE* f30=fopen("translations\\qt_ru.qm","rb");
    if(f30==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_ru.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ar.qm\n");
        fclose(f30);
    }
    ui->progressBar_2->setValue(30);
    FILE* f31=fopen("translations\\qt_sk.qm","rb");
    if(f31==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_sk.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_sk.qm\n");
        fclose(f31);
    }
    ui->progressBar_2->setValue(31);
    FILE* f32=fopen("translations\\qt_tr.qm","rb");
    if(f32==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_tr.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_tr.qm\n");
        fclose(f32);
    }
    ui->progressBar_2->setValue(32);
    FILE* f33=fopen("translations\\qt_uk.qm","rb");
    if(f33==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_uk.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_uk.qm\n");
        fclose(f33);
    }
    ui->progressBar_2->setValue(33);
    FILE* f34=fopen("translations\\qt_zh_CN.qm","rb");
    if(f34==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_zh_CN.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_zh_CN.qm\n");
        fclose(f34);
    }
    ui->progressBar_2->setValue(34);
    FILE* f35=fopen("translations\\qt_zh_TW.qm","rb");
    if(f35==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:translations\\qt_zh_TW.qm\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_zh_TW.qm\n");
        fclose(f35);
    }
    ui->progressBar_2->setValue(35);
    ui->textBrowser->insertPlainText("search translation files finished\n");
    FILE* f36=fopen("styles\\qwindowsvistastyle.dll","rb");
    if(f36==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:styles\\qwindowsvistastyle.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:styles\\qwindowsvistastyle.dll\n");
        fclose(f36);
    }
    ui->progressBar_2->setValue(36);
    FILE* f37=fopen("platforms\\qwindows.dll","rb");
    if(f37==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:platforms\\qwindows.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:platforms\\qwindows.dll\n");
        fclose(f37);
    }
    ui->progressBar_2->setValue(37);
    FILE* f38=fopen("imageformats\\qgif.dll","rb");
    if(f38==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qgit.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qgit.dll\n");
        fclose(f38);
    }
    ui->progressBar_2->setValue(38);
    FILE* f39=fopen("imageformats\\qicns.dll","rb");
    if(f39==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qgit.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qgit.dll\n");
        fclose(f39);
    }
    ui->progressBar_2->setValue(39);
    FILE* f40=fopen("imageformats\\qico.dll","rb");
    if(f40==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qico.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qico.dll\n");
        fclose(f40);
    }
    ui->progressBar_2->setValue(40);
    FILE* f41=fopen("imageformats\\qjpeg.dll","rb");
    if(f41==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qjpeg.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qjepg.dll\n");
        fclose(f41);
    }
    ui->progressBar_2->setValue(41);
    FILE* f42=fopen("imageformats\\qsvg.dll","rb");
    if(f42==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qsvg.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qsvg.dll\n");
        fclose(f42);
    }
    ui->progressBar_2->setValue(42);
    FILE* f43=fopen("imageformats\\qtga.dll","rb");
    if(f43==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qtga.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qtga.dll\n");
        fclose(f43);
    }
    ui->progressBar_2->setValue(43);
    FILE* f44=fopen("imageformats\\qtiff.dll","rb");
    if(f44==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qtiff.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:translations\\qt_ar.qm\n");
        fclose(f44);
    }
    ui->progressBar_2->setValue(44);
    FILE* f45=fopen("imageformats\\qwbmp.dll","rb");
    if(f45==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qwbmp.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qwbmp.dll\n");
        fclose(f45);
    }
    ui->progressBar_2->setValue(45);
    FILE* f46=fopen("imageformats\\qwebp.dll","rb");
    if(f46==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:imageformats\\qwebp.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:imageformats\\qwebp.dll\n");
        fclose(f46);
    }
    ui->progressBar_2->setValue(46);
    FILE* f47=fopen("iconengines\\qsvgicon.dll","rb");
    if(f47==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:iconengines\\qsvgicon.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:iconengines\\qsvgicon.dll\n");
        fclose(f47);
    }
    ui->progressBar_2->setValue(47);
    FILE* f48=fopen("script\\model.dll","rb");
    if(f48==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\model.dll\n");
        ui->textBrowser->insertPlainText("WARNING!!! if you do not have this file,you can not start self classification\n");
        QMessageBox::information(NULL,  "警告",  "没有模型文件，本程序无法进行自动分类操作", QMessageBox::Yes);
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file :script\\model.dll\n");
        fclose(f48);
    }
    ui->progressBar_2->setValue(48);
    FILE* f49=fopen("script\\Data_Pre.py","rb");
    if(f49==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\Data_Pre.py\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\Data_Pre.py\n");
        fclose(f49);
    }
    ui->progressBar_2->setValue(49);
    FILE* f50=fopen("script\\resnet.py","rb");
    if(f50==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\resnet.py\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\resnet.py\n");
        fclose(f50);
    }
    ui->progressBar_2->setValue(50);
    FILE* f51=fopen("script\\Test_model.dll","rb");
    if(f51==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\Test_model.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\Test_model.dll\n");
        fclose(f51);
    }
    ui->progressBar_2->setValue(51);
    FILE* f52=fopen("script\\train.dll","rb");
    if(f52==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\train.dll\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\train.dll\n");
        fclose(f52);
    }
    ui->progressBar_2->setValue(52);
    FILE* f53=fopen("script\\utils.py","rb");
    if(f53==NULL)
    {
        ui->textBrowser->insertPlainText("can not found the file:script\\utils.py\n");
    }
    else
    {
        ui->textBrowser->insertPlainText("successfully found the file:script\\utils.py\n");
        fclose(f53);
    }
    ui->progressBar_2->setValue(53);
    ui->textBrowser->insertPlainText("begin to check python environment\n");
    //system("pip");
    wchar_t ch[]=L"open";
    wchar_t ch1[]=L"cmd.exe";
    wchar_t ch2[]=L"pip";
    ShellExecute(NULL,ch,ch1,ch2,NULL,0);
    FILE* f54 = fopen("error.log", "rb");
    if (f54 != NULL)
    {
        char ch[100] = { '\0' };
        fgets(ch, 10, f1);
        if (ch[0] == 39)
        {
            ui->textBrowser->insertPlainText("there are no python on your computer,please install python and add it to %PATH%\n");
            QMessageBox::information(NULL,  "错误",  "由于本机无python环境，本程序无法继续执行代码，请安装python后重试(点击确定退出本程序)", QMessageBox::Yes);
            fclose(f1);
            exit(0);
        }
        fclose(f1);
    }
    ui->progressBar->setValue(1);
    ui->textBrowser->insertPlainText("successfully found existing python environment on your computer\n");
    ui->textBrowser->insertPlainText("we will find the script this program need in your computer if not exist,we will download from python.org\n");
    ui->textBrowser->insertPlainText("finding torch in your computer,please wait\n");
    //system("pip install torch");
    wchar_t str[]=L"open";
    wchar_t str1[]=L"cmd.exe";
    wchar_t str2[]=L"pip install torch";
    ShellExecute(NULL,str,str1,str2,NULL,0);
    ui->textBrowser->insertPlainText("find torch ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(2);
    ui->textBrowser->insertPlainText("finding torchvision in your computer,please wait\n");
    //system("pip install torchvision");
    wchar_t str3[]=L"pip install torchvision";
    ShellExecute(NULL,str,str1,str3,NULL,0);
    ui->textBrowser->insertPlainText("find torchvision ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(3);
    ui->textBrowser->insertPlainText("finding matplotlib in your computer,please wait\n");
    //system("pip install matplotlib");
    wchar_t str4[]=L"pip install matplotlib";
    ShellExecute(NULL,str,str1,str4,NULL,0);
    ui->textBrowser->insertPlainText("find matplotlib ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(4);
    ui->textBrowser->insertPlainText("finding visdom in your computer,please wait");
    //system("pip install visdom");
    wchar_t str5[]=L"pip install visdom";
    ShellExecute(NULL,str,str1,str5,NULL,0);
    ui->textBrowser->insertPlainText("find visdom ended (if you still find there are no torch ,please try again)\n");
    ui->progressBar->setValue(5);
    ui->textBrowser->insertPlainText("congratulations!\nfiles checking finished\n");
    ui->textBrowser->insertPlainText("文件检查结束\n");
    ui->textBrowser->insertPlainText("开始启动python脚本文件...\n");
    ui->textBrowser->insertPlainText("请稍后\n");
    ui->textBrowser->insertPlainText("启动组件ipython,powershell,python,请稍后\n");
    wchar_t cch1[]=L"open";
    wchar_t cch2[]=L"cmd.exe";
    wchar_t cch3[]=L"python script\\Test_model.dll";
    ui->textBrowser->insertPlainText("向命令行注入指令：python script\\Test_model.dll");
    ui->textBrowser->insertPlainText("开始执行智能识别操作，请稍后\n");
    ShellExecute(NULL,cch1,cch2,cch3,NULL,0);
    int b = 0;
    FILE* f100 = fopen("script\\connect.dll", "rb");
    char chh[10] = { '\0' };
    fgets(chh, 10, f100);
    if(chh[0]=='h')
    {
        ui->textBrowser->insertPlainText("识别结果：有害垃圾\n");
        QMessageBox::information(NULL,  "识别结果",  "识别结果：有害垃圾", QMessageBox::Yes);
        ui->textBrowser->insertPlainText("识别完成\n");
        b=1;
    }
    else if(chh[0]=='k')
    {
        ui->textBrowser->insertPlainText("识别结果：厨余垃圾\n");
        QMessageBox::information(NULL,  "识别结果",  "识别结果：厨余垃圾", QMessageBox::Yes);
        ui->textBrowser->insertPlainText("识别完成\n");
        b=2;
    }
    else if(chh[0]=='r')
    {
        ui->textBrowser->insertPlainText("识别结果：可回收垃圾\n");
        QMessageBox::information(NULL,  "识别结果",  "识别结果：可回收垃圾", QMessageBox::Yes);
        ui->textBrowser->insertPlainText("识别完成\n");
        b=3;
    }
    else if(chh[0]=='o')
    {
        ui->textBrowser->insertPlainText("识别结果：其他垃圾\n");
        QMessageBox::information(NULL,  "识别结果",  "识别结果：其它垃圾", QMessageBox::Yes);
        ui->textBrowser->insertPlainText("识别完成\n");
        b=4;
    }
    else
    {
        if(b==1||b==2||b==3||b==4)
        {
            ui->textBrowser->insertPlainText("本程序出现了未知错误，0x00\n");
        }
        else
        {
            ui->textBrowser->insertPlainText("本程序出现了未知错误：识别未完成，0x01\n");
        }
    }
    fclose(f100);
}


void MainWindow::on_pushButton_6_clicked()
{
    wchar_t cch1[]=L"open";
    wchar_t cch2[]=L"https://github.com/lry-123456789/garbage-classification";
    ShellExecute(NULL,cch1,cch2,NULL,NULL,0);
}

