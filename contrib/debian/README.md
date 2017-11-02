
Debian
====================
This directory contains files used to package popbitd/popbit-qt
for Debian-based Linux systems. If you compile popbitd/popbit-qt yourself, there are some useful files here.

## popbit: URI support ##


popbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install popbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your popbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/popbit128.png` to `/usr/share/pixmaps`

popbit-qt.protocol (KDE)

