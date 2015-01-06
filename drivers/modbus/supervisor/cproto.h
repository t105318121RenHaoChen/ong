/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/admcli.c */
void AdmUsage(t_cli *cl);
void AdmInfo(t_cli *cl);
int AdmCmd(t_cli *cl, char *buf);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/main.c */
void MainLoop(void);
void Usage(char *prg, char *fmt);
int DoArg(int initial, int argc, char *argv[]);
void SetOption(char *name, char *value);
void DoConfig(int hot, int custom, char *fcfg);
void stopService(int sig);
int main(int argc, char *argv[]);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/sensor.c */
t_sensor *SensorNumSerial(int num, int serial);
t_cmn_sensor *CmnSensorNumSerial(int num, int serial);
t_cmn_sensor *CmnSensorFindByIeee(char *ieee);
t_cmn_sensor *ModbusDiaLookup(int dev, int serial);
Network_t *NetworkFindFromName(char *name);
Network_t *NetworkCreate(char *name);
Network_t *NetworkCreateEthernet(char *name);
Network_t *NetworkCreateSerial(char *name, char *modbusUART, char *modbusBaudrate, char *modbusParity, char *modbusDataSize, char *modbusStopSize);
void NetworkDestroy(Network_t *network);
void NetworkDelete(Network_t *network);
void NetworkDeleteNext(Network_t *network);
void NetworkEnsureDeviceAreInit(Network_t *network);
void NetworkStart(Network_t *network);
void NetworkStartAll(void);
void NetworkList(void *cl);
void NetworkListDevice(void *cl, Network_t *network);
Sensor_t *DeviceFindFromName(Network_t *network, char *name);
Sensor_t *DeviceCreate(Network_t *network, char *name, char *addr, char *product);
int DeviceCheckModbusConnection(Sensor_t *device);
int DeviceModbusDisconnection(Sensor_t *device);
void DeviceDelete(Sensor_t *device);
void DeviceDestroy(Sensor_t *device);
int DeviceDiaDeleteNext(Sensor_t *device);
int DeviceDiaCreateNext(Sensor_t *device);
void DeviceNotifyProductUpdate(char *ref);
void DeviceListInterfaces(void *cl, Sensor_t *device);
void templateSetDevice(Sensor_t *device);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/sensor-cache.c */
void DriverLoadNetworksCache(void);
void DriverUpdateNetworksCache(void);
void DriverClearNetworksCache(void);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/sensor-diaclient.c */
int WDiaUCBPreLoadTemplate_DiaNetInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaDevInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaAppInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaRepInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate_DiaDatContCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPreLoadTemplate(char *reqname, t_dia_req *preq, char *target, t_cmn_sensor *cmn, void **xo, char *templ);
int WDiaUCBPostLoadTemplate_DiaAppInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate_DiaAppElemCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate_DiaDevInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate_DiaNetInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate_DiaIpuInstCreate(t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
int WDiaUCBPostLoadTemplate(char *reqname, t_dia_req *preq, char *target, t_cmn_sensor *cmn, void *xo);
void WDiaUCBRequestOk_DiaIpuOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaNetOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDevOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAppOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAccOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDatOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaRepOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaNetDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDevDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAppDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaDatDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
void WDiaUCBRequestOk_DiaAccDelOk(t_dia_req *preq, t_cmn_sensor *cmn);
int WDiaUCBRequestOk(char *reqname, t_dia_req *preq, t_cmn_sensor *cmn);
int WDiaUCBRequestTimeout(char *reqname, t_dia_req *preq, t_cmn_sensor *cmn);
int WDiaUCBRequestError(char *reqname, t_dia_req *preq, t_cmn_sensor *cmn);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/sensor-diaserver.c */
int IpuExecuteMethod(char *ident, int targetlevel, void *obix, char *targetid, int tid);
int CmnNetworkExecuteMethod(char *ident, int targetlevel, void *obix, char *targetid, int tid);
int iCmnSensorExecuteMethod(t_cmn_sensor *cmn, int app, int cluster, int numm, int targetlevel, void *obix, char *targetid, int tid);
int iCmnSensorRetrieveAttrValue(t_cmn_sensor *cmn, int app, int cluster, int numm, int targetlevel, char *targetid, int tid);
int iCmnSensorUpdateAttrValue(t_cmn_sensor *cmn, int app, int cluster, int numm, int targetlevel, void *obix, char *targetid, int tid);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/sensor-events.c */
void ModbusSensorClockSc(time_t now);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/sensor-reader.c */
void modbusReaderClockMs(void);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/spv_util.c */
char *GetEnvVarName(void);
int DoSerial(void);
void DoClockMs(void);
void DoClockSc(void);
void DoInternalEvent(t_imsg *imsg);
void DoInternalTimer(t_imsg *imsg);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/var.c */
char *GetDate(void);
char *GetTime(void);
char *GetAdaptorName(void);
char *GetGwContact(void);
char *GetDrvContact(void);
char *GetHostName(void);
char *GetHostTarget(void);
char *GetReqId(void);
char *GetPlcTarget(void);
/* /home/mlouiset/Work/ong/git/ong/drivers/modbus/.apu_build/centos6-x86_64/package_runtime/modbus/supervisor/version.c */
char *GetAdaptorVersion(void);
