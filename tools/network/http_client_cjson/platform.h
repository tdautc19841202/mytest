
#ifndef _NET_PLATFORM_H_
#define _NET_PLATFORM_H_

#define HTTP_SERVER_IP      "192.168.0.251"
#define HTTP_SERVER_PORT    (80)
#define HTTP_DOWNLOAD_PORT  (8080)

typedef size_t (*MRJ_HTTP_CALLBACK)(void *buffer, size_t size, size_t nitems, void *outstream);

struct platform_auth_response 
{
    int result;
    char dev_secret[32];
    char domain[32];
    char ip_addr[16];
    int  port;
};

struct platform_login_response
{
    int result;
    int ap_state;
    char token[64];
    char last_report_time[32];
    char curr_time[32];
};

struct UpgradeInfo
{
    int pfcode;
    int filesize;
    char url[256];
    char version[16];
};

/* �����ļ���Ϣ */
struct DownloadInfo
{
    int result;                    /* �����ļ��������ս����0-�ɹ���other-ʧ�� */ 
    long downsize;                  /* �����ļ������ܴ�С */
    long alreadysize;               /* �Ѿ����ص��ļ���С */
    long flushsize;                 /* �� */
    FILE *fp;                       /* �����ļ������ļ�ָ�� */
};


/* ƽ̨��ȡ�㷨������Ϣ */
typedef struct configPlatform
{
    int result;         // 1��ʾ�ɹ���2��ʾʧ�ܣ�3û����������
    int configId;       // ������Ϣ���ص�ID
    int leftPoint;      // ��߾�
    int rightPoint;     // �ұ߾�
    int topPoint;       // �ϱ߾�
    int bottomPoint;    // �±߾�
    int direction;      // ����
    int height;         // �豸��װ�߶�
    int init;           // �ָ�Ĭ�����ñ�ʶ��0-�������ã�1-�ָ�Ĭ������
} CONFIG_PLATFORM;


struct DeviceBind 
{
    int result;
    int bindFlag;
};



#endif /* _NET_PLATFORM_H_ */
