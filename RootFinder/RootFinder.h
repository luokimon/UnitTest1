// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� ROOTFINDER_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// ROOTFINDER_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef ROOTFINDER_EXPORTS
#define ROOTFINDER_API __declspec(dllexport)
#else
#define ROOTFINDER_API __declspec(dllimport)
#endif

// �����Ǵ� RootFinder.dll ������
class ROOTFINDER_API CRootFinder {
public:
	CRootFinder(void);
    double SquareRoot(double v);
	// TODO:  �ڴ�������ķ�����
};

extern ROOTFINDER_API int nRootFinder;

ROOTFINDER_API int fnRootFinder(void);
