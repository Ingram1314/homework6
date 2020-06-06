/*
 * @Descripttion: 
 * @version: 
 * @Author: sueRimn
 * @Date: 2020-06-05 10:16:32
 * @LastEditors: sueRimn
 * @LastEditTime: 2020-06-06 11:42:20
 */ 
#ifndef _fasta_h
#define _fasta_h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int currentcol = 0;

void writeFasta_seq(int c,FILE *fp);        //д��fasta�ļ������в���   
void writeFasta_note(char note[],FILE *fp);         

void writeFasta_seq(int c,FILE *fp)
{
    if (currentcol < 70){   //������г��� + ԭ�е�С��70��ֱ������
        putc(c,fp);
        currentcol += 1;
    }
    else{
        putc('\n',fp);   //�����һ��
        putc(c,fp);
        currentcol = 1;
    }
}
void writeFasta_note(char note[],FILE *fp)   //�Դ����з�������ע����Ϣ
{
    fputs(note,fp);
}
#endif  //_fasta_h