GPUʹ����֪��

1 ����
Hi3559A GPU�������������֣��ں�̬�������û�̬������

1.1 �ں�̬����
�ں�̬��������linux�ںˣ��ǿ�Դ�����ġ�
�ں�̬����Դ������ڷ���·����mpp/component/gpu/kernel�У��û���Ҫ��·���£��޸�Makefile��ָ��Makefile�е�KDIR=$(�û����ں�·��)��Ȼ����make������롣
��������ں�̬ko��mpp/component/gpu/release/ko�У�ʹ�ø�Ŀ¼�µĽű�./loadgpu -i������ɼ��ء�

1.2 �û�̬����
�û�̬��������Դ��������ʽΪ�����ƿ��ļ��������ڷ���·����mpp/component/gpu/release/lib�С�
�û�ʹ��GPU�����ڵ����Ͻ���·��export��ϵͳ�����ҵ���λ�ã�����ʹ���������������
export LD_LIBRARY_PATH="/xxxx/mpp/component/gpu/release/lib:$LD_LIBRARY_PATH"


2 ����
GPU֧��ȫ����OpenGLES��OpenCL�ӿڱ�׼����˶�Ӧ���ֽӿڱ�׼�ṩ������������

2.1 OpenGLES
OpenGLES��ͼ����صĻ��ƽӿڣ�������framebuffer
����ʱ����Ҫ�û�����mpp/sample/gpu��ʹ��make������롣
��ע�⣬GPU��sample���������д�framebuffer���������GLES��sampleʱ����Ҫ�û��ں�̨����һ��ARGB8888��ʽ��sample_hifb��
���Խ���mpp/sample/hifb��ʹ��./sample_hifb 0 0 0���Ȼ��Ctrl+Z��sample_hifb���õ���̨��

2.1.1 es20_eglCreateWindowSurface
�򵥵�ʹ��GPU���Ƶ���Ļ�ϵ�sample��

2.1.2 es20_eglCreateWindowSurface
�򵥵�ʹ��GPU���Ƶ��ڴ��е�sample���������ƣ���

2.2 pano2view
pano2view��ʹ��GPU��ȫ����Ƶ���з�����У����ģ�顣
����pano2view��sample����Ҫ����framebuffer��

