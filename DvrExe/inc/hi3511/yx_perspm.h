/*******************************************************************
*
*   �ļ���:     yx_perspm.h
*   ��Ȩ:       ������Ѹ����ɷ����޹�˾
*   ������:     �θ�    2009��5��20��
*
*   �汾��:     1.0
*   �ļ�����:   HIƽ̨����Χ��Դ����ģ��ͷ�ļ�
*
*******************************************************************/
#ifndef _LINUX_YX_PERSPM_H_
#define _LINUX_YX_PERSPM_H_

#include <linux/ioctl.h>
#include <linux/types.h>

#define RESET_SET        0
#define RESET_CLEAR		 1

#define	PERSPM_IOCTL_BASE	'P'

#define PERSPMIOC_SETCLKENABLE      _IOW(PERSPM_IOCTL_BASE, 0, int)
#define PERSPMIOC_SETCLKDISABLE     _IOW(PERSPM_IOCTL_BASE, 1, int)
#define PERSPMIOC_GETCLKSTATE       _IOR(PERSPM_IOCTL_BASE, 2, int)

#define PERSPMIOC_GETSYSINFO        _IOR(PERSPM_IOCTL_BASE, 3, int)
#define PERSPMIOC_DDRC_SETDISABLE 	_IO(PERSPM_IOCTL_BASE, 4)
#define PERSPMIOC_DDRC_SETENABLE  	_IO(PERSPM_IOCTL_BASE, 5)
#define PERSPMIOC_SETSYSSTATUS      _IOW(PERSPM_IOCTL_BASE, 6, int)
#define PERSPMIOC_SETSYSRESET      	_IO(PERSPM_IOCTL_BASE, 7)

#define PERSPMIOC_SETSYSRESET_I2C   _IOW(PERSPM_IOCTL_BASE, 8, int)
#define PERSPMIOC_SETSYSRESET_UART2 _IOW(PERSPM_IOCTL_BASE, 9, int)
#define PERSPMIOC_SETSYSRESET_RTC   _IOW(PERSPM_IOCTL_BASE, 10, int)
#define PERSPMIOC_SETSYSRESET_USB   _IOW(PERSPM_IOCTL_BASE, 11, int)
#define PERSPMIOC_SETSYSRESET_OTG   _IOW(PERSPM_IOCTL_BASE, 12, int)
#define PERSPMIOC_SETSYSRESET_ARMCORE  _IOW(PERSPM_IOCTL_BASE, 13, int)
#define PERSPMIOC_SETSYSRESET_VO       _IOW(PERSPM_IOCTL_BASE, 14, int)
#define PERSPMIOC_SETSYSRESET_VI3      _IOW(PERSPM_IOCTL_BASE, 15, int)
#define PERSPMIOC_SETSYSRESET_VI2      _IOW(PERSPM_IOCTL_BASE, 16, int)
#define PERSPMIOC_SETSYSRESET_VI1      _IOW(PERSPM_IOCTL_BASE, 17, int)
#define PERSPMIOC_SETSYSRESET_VI0      _IOW(PERSPM_IOCTL_BASE, 18, int)
#define PERSPMIOC_SETSYSRESET_VIAHB    _IOW(PERSPM_IOCTL_BASE, 19, int)
#define PERSPMIOC_SETSYSRESET_SMI      _IOW(PERSPM_IOCTL_BASE, 20, int)
#define PERSPMIOC_SETSYSRESET_ETH      _IOW(PERSPM_IOCTL_BASE, 21, int)
#define PERSPMIOC_SETSYSRESET_SIO1     _IOW(PERSPM_IOCTL_BASE, 22, int)
#define PERSPMIOC_SETSYSRESET_SIO0     _IOW(PERSPM_IOCTL_BASE, 23, int)
#define PERSPMIOC_SETSYSRESET_MMC      _IOW(PERSPM_IOCTL_BASE, 24, int)
#define PERSPMIOC_SETSYSRESET_PCI      _IOW(PERSPM_IOCTL_BASE, 25, int)
#define PERSPMIOC_SETSYSRESET_IR       _IOW(PERSPM_IOCTL_BASE, 26, int)
#define PERSPMIOC_SETSYSRESET_SSP      _IOW(PERSPM_IOCTL_BASE, 27, int)
#define PERSPMIOC_SETSYSRESET_UART1    _IOW(PERSPM_IOCTL_BASE, 28, int)
#define PERSPMIOC_SETSYSRESET_UART0    _IOW(PERSPM_IOCTL_BASE, 29, int)
#define PERSPMIOC_SETSYSRESET_DSU      _IOW(PERSPM_IOCTL_BASE, 30, int)
#define PERSPMIOC_SETSYSRESET_CIPHER   _IOW(PERSPM_IOCTL_BASE, 31, int)
#define PERSPMIOC_SETSYSRESET_VEDU     _IOW(PERSPM_IOCTL_BASE, 32, int)

#endif