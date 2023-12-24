## 适用于PlatformIO编写ESP32-0.91条形OLED屏幕模版

### 配置编译环境

1. 初始化环境
   右击```platformio.ini``` -> PlatformIO -> 重新初始化
   右击```platformio.ini``` -> PlatformIO -> 全部更新

2. 创建配置
   点击窗口左上角```添加配置...```
   分别添加：
    - CMake应用程序 (添加完成后先不要改任何配置)
    - PlatformIO上传 (根据自身需求添加)

3. 配置CMake配置文件
   在设置 -> 构建执行部署 -> CMake -> 添加配置文件...
    - 名称 -> ```wemos_d1_uno32```
    - 构建类型 -> ```wemos_d1_uno32```
    - 工具链 -> ```默认```
    - 生成器 -> ```Ninja```

   其余保持默认

4. 修改配置
   回到编辑配置界面，修改刚刚创建的CMake程序
    - 名称 ->  ```Z_DUMMY_TARGET```
    - 目标 ->  ```Z_DUMMY_TARGET```
    - 可执行文件 ->  ```Z_DUMMY_TARGET```

5. 构建

   运行 ```PlatformIO 上传``` 执行编译上传操作
   
