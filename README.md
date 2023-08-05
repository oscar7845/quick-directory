# Quick Directory Navigator
This tool offers an easily accessible menu structure of all your mounted storage right from your system tray. With one click you can open files or folders. If you need to move or copy files, you can drag them right out of the menu.
## The Idea
The idea was to find a way to save time, minimize clicks and make the process of accessing files and directories more smooth. The application provides a quick and simple way to navigate through their storage drives and directories. 
## How it works
The tool sits in the system tray and provides a menu that lists all the storage drives on your system. You can interact with the drives, directories, and files directly from the tray menu. If you single click on a file it opens it with the default application, if you double click a directory or drive it opens it in the file explorer, and if you right click it opens a context menu. You can also drag and drop files and folders from the menu to other locations to move, copy, or link them.
## How it was built
I used Qt and its different classes like QSettings, QFileIconProvider, QStorageInfo, and QTimer. The settings of the application, such as the custom items, are handled using the QSettings class. Custom directories are added to the system tray menu as PathMenu objects.
The TrayMenu class creates the system tray menu and handles interactions with the menu items and saving/loading user settings related to the menu items.
The tool tests different menu structures to see which best suits the user's needs. During the construction of the tray menu, the code increments the 'ratio' by 0.0001 a thousand times and checks each time to see which 'ratio' fits best. 
```sh
for (i = 0; i < iterations; i++) {
    threads.add(new simulate(ratio + 0.0001*i));
}
```
You can customize it to optimize multiple parameters at the same time.
## Bugs and challenges
One issue was managing the memory, so I implemented a dynamic loading system where instead of loading all files and directories at once, the application only loads whats currently needed. Also, I noticed an issue with detecting and updating drivers for example when a USB driver is connected or removed, so I added a system to monitor the changes in the sustem's drives.
## Things learned
Spent time using the Qt framework which helped making the ui and interact with the files and storage data of the device. Learned about memory management and specifically about dynamic memory. 
## Roadmap
Next things would be adding a search function to find files quickly, allowing to customize the look of the tray menu, and even an AI search or grouping of files would be cool.
