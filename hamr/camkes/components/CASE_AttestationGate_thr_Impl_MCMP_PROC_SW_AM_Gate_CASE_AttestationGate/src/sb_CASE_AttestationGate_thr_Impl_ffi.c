// This file will be regenerated, do not edit

#include <all.h>
#include <camkes.h>
#include <stdbool.h>
#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter.h>

hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints entryPoints;
IS_82ABD8 event_in_port_ids;
IS_82ABD8 data_in_port_ids;
IS_82ABD8 event_out_port_ids;
IS_82ABD8 data_out_port_ids;
bool initialized = false;

void init(STACK_FRAME_ONLY) {
  if(!initialized) {
    DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "init", 0);

    entryPoints = (hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter_entryPoints(SF_LAST);
    event_in_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_eventInPortIds_(entryPoints);
    data_in_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_dataInPortIds_(entryPoints);
    event_out_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_eventOutPortIds_(entryPoints);
    data_out_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_dataOutPortIds_(entryPoints);
    initialized = true;
  }
}

void ffiinitializeComponent(unsigned char *parameter, long parameterSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiinitializeComponent", 0);

  entryPoints = (hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter_entryPoints(SF_LAST);
  event_in_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_eventInPortIds_(entryPoints);
  data_in_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_dataInPortIds_(entryPoints);
  event_out_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_eventOutPortIds_(entryPoints);
  data_out_port_ids = (IS_82ABD8) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_dataOutPortIds_(entryPoints);
}

void checkAndReportBufferOverrun(STACK_FRAME long bytesWritten, long bufferSizeBytes) {
  #ifdef CAKEML_CHECK_AND_REPORT_BUFFER_OVERRUNS
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "checkAndReportBufferOverrun", 0);

  init(SF_LAST);
  if (bytesWritten > bufferSizeBytes) {
    DeclNewString(_str);
    String str = (String)&_str;
    String__append(SF str, string("Wrote too many bytes to buffer"));
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
  }
  #endif
}

void dumpBuffer(STACK_FRAME size_t numBits, U8* buffer) {
  #ifdef CAKEML_DUMP_BUFFERS
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "dumpBuffer", 0);

  init(SF_LAST);
  DeclNewString(_str);
  String str = (String)&_str;
  String__append(SF str, string("["));
  size_t end = ((numBits / 8) > 80) ? 80 : (numBits / 8);
  for (int i = 0 ; i < end ; ++i) {
    U8_string_(SF str, buffer[i]);
  }
  String__append(SF str, string("]"));
  api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
  #endif
}

void ffiapi_receiveInput(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_receiveInput", 0);

  init(SF_LAST);
  art_Art_receiveInput(SF event_in_port_ids, data_in_port_ids);
}

void ffiapi_sendOutput(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_sendOutput", 0);

  init(SF_LAST);
  art_Art_sendOutput(SF event_out_port_ids, data_out_port_ids);
}

void ffiapi_logInfo(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_logInfo", 0);

  init(SF_LAST);
  DeclNewString(_str);
  String str = (String)&_str;
  str->size = parameterSizeBytes;
  memcpy(str->value, parameter, parameterSizeBytes);

  api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
} 

void ffiapi_logDebug(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_logDebug", 0);

  init(SF_LAST);
  DeclNewString(_str);
  String str = (String)&_str;
  str->size = parameterSizeBytes;
  memcpy(str->value, parameter, parameterSizeBytes);

  api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
} 

void ffiapi_logError(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_logError", 0);

  init(SF_LAST);
  DeclNewString(_str);
  String str = (String)&_str;
  str->size = parameterSizeBytes;
  memcpy(str->value, parameter, parameterSizeBytes);

  api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
} 

void ffiapi_get_trusted_ids(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_get_trusted_ids", 0);

  init(SF_LAST);
  size_t numBits = 0;
  api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &numBits, (U8 *)(output));
  checkAndReportBufferOverrun(SF numBits / 8, outputSizeBytes);
  dumpBuffer(SF numBits, output);
}

void ffiapi_get_AutomationRequest_in(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_get_AutomationRequest_in", 0);

  init(SF_LAST);
  size_t numBits = 0;
  output[0] = api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &numBits, (U8 *)(output + 1));
  checkAndReportBufferOverrun(SF numBits / 8, (outputSizeBytes - 1));
  dumpBuffer(SF numBits, output);
}

void ffiapi_send_AutomationRequest_out_UXAS(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_send_AutomationRequest_out_UXAS", 0);

  init(SF_LAST);
  api_put_AutomationRequest_out_UXAS__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF parameterSizeBytes*8, (U8 *)parameter);
}

void ffiapi_send_AutomationRequest_out_MON_REQ(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_send_AutomationRequest_out_MON_REQ", 0);

  init(SF_LAST);
  api_put_AutomationRequest_out_MON_REQ__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF parameterSizeBytes*8, (U8 *)parameter);
}

void ffiapi_get_OperatingRegion_in(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_get_OperatingRegion_in", 0);

  init(SF_LAST);
  size_t numBits = 0;
  output[0] = api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &numBits, (U8 *)(output + 1));
  checkAndReportBufferOverrun(SF numBits / 8, (outputSizeBytes - 1));
  dumpBuffer(SF numBits, output);
}

void ffiapi_send_OperatingRegion_out(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_send_OperatingRegion_out", 0);

  init(SF_LAST);
  api_put_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF parameterSizeBytes*8, (U8 *)parameter);
}

void ffiapi_get_LineSearchTask_in(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_get_LineSearchTask_in", 0);

  init(SF_LAST);
  size_t numBits = 0;
  output[0] = api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &numBits, (U8 *)(output + 1));
  checkAndReportBufferOverrun(SF numBits / 8, (outputSizeBytes - 1));
  dumpBuffer(SF numBits, output);
}

void ffiapi_send_LineSearchTask_out(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl_ffi.c", "", "ffiapi_send_LineSearchTask_out", 0);

  init(SF_LAST);
  api_put_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF parameterSizeBytes*8, (U8 *)parameter);
}

void ffisb_pacer_notification_wait(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  sb_pacer_notification_wait();
  output[0] = 1;
}

void ffisb_pacer_notification_emit(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  // non self-pacing so do nothing
  output[0] = 1;
}

/**
 * Required by the FFI framework
 */

void ffiwrite (unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
}

void cml_exit(int arg) {
  #ifdef DEBUG_FFI
  {
    fprintf(stderr,"GCNum: %d, GCTime(us): %ld\n",numGC,microsecs);
  }
  #endif
  exit(arg);
}

// convert big-endian 32-bit float to little-endian 64 bit double
void ffifloat2double(unsigned char *parameter, long parameterSizeBytes,
                     unsigned char *output,    long outputSizeBytes) {
  char bytes [4];
  assert (4 == parameterSizeBytes);
  bytes[3] = parameter[0];
  bytes[2] = parameter[1];
  bytes[1] = parameter[2];
  bytes[0] = parameter[3];

  double result = *((float*)bytes);
  memcpy(output, (unsigned char*) &result, sizeof(double));
}

void ffiraw_print_buffer(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {

  int elideAfter = 20; // stop printing after this many consecutive 0's seen
  int stopAfter = 50; // exit after this many consecutive 0's seen, lessens 'busy-wait'

  U8* buffer = (U8 *) parameter;

  printf("%i bytes\n", parameterSizeBytes); // doesn't include the bool byte

  if(parameterSizeBytes > 0) {
    int numZerosSeen = 0;
    printf("[%02x\n", buffer[0]); // first byte is a bool
    for(int i = 1; i < parameterSizeBytes + 1; i++) {
      numZerosSeen = buffer[i] == 0 ? (numZerosSeen + 1) : 0;
      if(numZerosSeen >= elideAfter) {
        if(numZerosSeen % stopAfter == 0) { printf("..."); break; }
      } else {
      	printf("%02x ", buffer[i]);
      	if(i % 16 == 0) printf("\n");
      }
    }
    printf("]\n");
  }
}

