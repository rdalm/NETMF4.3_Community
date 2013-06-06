//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _COMMUNITY_HARDWARE_SETTINGS_H_
#define _COMMUNITY_HARDWARE_SETTINGS_H_

#include <TinyCLR_Interop.h>
struct Library_Community_Hardware_Settings_Community_Hardware_SystemSettings
{
    static const int FIELD_STATIC___hardwareSerial = 0;

    TINYCLR_NATIVE_DECLARE(get_DebugInterface___STATIC__CommunityHardwareSystemSettingsPort);
    TINYCLR_NATIVE_DECLARE(SetDebugInterface___STATIC__VOID__CommunityHardwareSystemSettingsPort);
    TINYCLR_NATIVE_DECLARE(NativeGetHardwareSerial___STATIC__VOID__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(WriteConfigBlock___STATIC__BOOLEAN__STRING__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(ReadConfigBlock___STATIC__BOOLEAN__STRING__SZARRAY_U1);

    //--//

};

struct Library_Community_Hardware_Settings_Community_Hardware_UserSettings
{
    static const int FIELD_STATIC___default = 1;

    static const int FIELD___name = 1;
    static const int FIELD___data = 2;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Community_Hardware_Settings;

#endif  //_COMMUNITY_HARDWARE_SETTINGS_H_