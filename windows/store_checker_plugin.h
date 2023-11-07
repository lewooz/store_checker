#ifndef FLUTTER_PLUGIN_STORE_CHECKER_PLUGIN_H_
#define FLUTTER_PLUGIN_STORE_CHECKER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace store_checker {

class StoreCheckerPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  StoreCheckerPlugin();

  virtual ~StoreCheckerPlugin();

  // Disallow copy and assign.
  StoreCheckerPlugin(const StoreCheckerPlugin&) = delete;
  StoreCheckerPlugin& operator=(const StoreCheckerPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace store_checker

#endif  // FLUTTER_PLUGIN_STORE_CHECKER_PLUGIN_H_
