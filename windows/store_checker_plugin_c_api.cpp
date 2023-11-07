#include "include/store_checker/store_checker_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "store_checker_plugin.h"

void StoreCheckerPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  store_checker::StoreCheckerPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
