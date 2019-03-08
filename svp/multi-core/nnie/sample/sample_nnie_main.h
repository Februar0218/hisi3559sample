#ifndef __SAMPLE_SVP_MAIN_H__
#define __SAMPLE_SVP_MAIN_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
#include "hi_type.h"

/******************************************************************************
* function : show Cnn sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Cnn();

/******************************************************************************
* function : show Segnet sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Segnet(void);

/******************************************************************************
* function : show FasterRcnn sample
******************************************************************************/
void SAMPLE_SVP_NNIE_FasterRcnn(void);

/******************************************************************************
* function : show fasterrcnn double roipooling sample
******************************************************************************/
void SAMPLE_SVP_NNIE_FasterRcnn_DoubleRoiPooling(void);

/******************************************************************************
* function : show RFCN sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Rfcn(void);

/******************************************************************************
* function : show SSD sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Ssd0(void *);
void SAMPLE_SVP_NNIE_Ssd1(void *);
void SAMPLE_SVP_NNIE_SsdForward0(void *arg);
void SAMPLE_SVP_NNIE_SsdForward1(void *arg);
/******************************************************************************
* function : show YOLOV1 sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Yolov1(void);

/******************************************************************************
* function : show YOLOV2 sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Yolov2(void);

/******************************************************************************
* function : show Lstm sample
******************************************************************************/
void SAMPLE_SVP_NNIE_Lstm(void);


/******************************************************************************
* function : Cnn sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Cnn_HandleSig(void);

/******************************************************************************
* function : Segnet sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Segnet_HandleSig(void);

/******************************************************************************
* function : fasterRcnn sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_FasterRcnn_HandleSig(void);

/******************************************************************************
* function : rfcn sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Rfcn_HandleSig(void);

/******************************************************************************
* function : SSD sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Ssd_HandleSig0(void);
void SAMPLE_SVP_NNIE_Ssd_HandleSig1(void);
void SAMPLE_SVP_NNIE_Ssd_HandleSigFoward0(void);
void SAMPLE_SVP_NNIE_Ssd_HandleSigFoward1(void);
/******************************************************************************
* function : Yolov1 sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Yolov1_HandleSig(void);

/******************************************************************************
* function : Yolov2 sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Yolov2_HandleSig(void);

/******************************************************************************
* function : Lstm sample signal handle
******************************************************************************/
void SAMPLE_SVP_NNIE_Lstm_HandleSig(void);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __SAMPLE_SVP_MAIN_H__ */
