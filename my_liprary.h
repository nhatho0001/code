#pragma once
#ifndef my_liprary
#define may_liprary
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;

struct i_student
{
	//int student_id;
	char* f_name;
	char* l_name;
     int date;
	 int month;
	 int year;
	int social_id;
};

struct i_course
{
	int course_id;
	char* course_name;
	char* teacher;
	int noc;
	int day1;
	int session1;
	int day3;
	int session2;
};
struct mark
{
	double total_mark;
	double final_mark;
	double orther_mark;
	i_course* i_c;
};
struct course
{
	i_course* i_c;
	int n_o_student;
	mark* m_o_student;
};
struct gmail_student
{
	int name_gmail;
	char* pw;
	i_student i_s;
	mark* m_s;
};
bool check_email_student( gmail_student & a);
void read_info_email_student(ifstream& file, gmail_student& a);
void removed_memory(gmail_student& a);
void create_class(fstream& f);
bool read_file_info_student( gmail_student & a);
void read_info_student(ifstream& file, i_student& a);
#endif 