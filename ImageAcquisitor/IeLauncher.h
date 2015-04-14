/*******************************************************************/
/*                                                                 */
/*         Copyright (C) 2013 Nanjing JingTai, Inc.                        */
/*                   All Rights Reserved                           */
/*******************************************************************/
/******************************************************************************
* FILENAME  - IeLauncher.h
*   
* USAGE     - Function prototypes for library function specially for ShengZhen AnJian Medical SanSung Flat DR 
*
* REVISION HISTORY - 
******************************************************************************/ 

///@brief: Launch IeEnhancer
///@param[in] srcBuf: ��Ҫ��ǿ��Դͼ����ڴ��ַ
///@param[in] destBuf: ��ǿ��ͼ��Ĵ���ڴ��ַ
///@param[in] strRegion: ��Ӧ��λ�������ļ�����Ŀ¼����"D:\\UserProgram\\8200\\config\\ChestAP.iee"��
///@                               �����ᵽָ����Ŀ¼�¶�ȡָ���������ļ�
///@param[in] width: ����ǿͼ��Ŀ��
///@param[in] height: ����ǿͼ��ĸ߶�
///@param[in] bitDepth: ����ǿͼ�����Чλ�������ݿͻ���ԭʼͼ����Чλ������
///@usage: int ret = LaunchImageEnhancer_RAWnMem((void *)inBuf, (void *)outBuf, "D:\\UserProgram\\8200\\config\\ChestAP.iee", 3000, 3000, 14);
///@ע�����������Чλ��8λ�ĻҶ�ͼ����ʹ��short�����������洢����ֵ
extern "C" __declspec(dllexport) int __stdcall LaunchImageEnhancer_RAWnMem(const void * srcBuf,
																void * destBuf,
																const char * strRegion, 
																const int width,
																const int height,
																const int bitDepth);


