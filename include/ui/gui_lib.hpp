#ifndef GUI_LIB_HPP
#define GUI_LIB_HPP

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
  #include "wx/wx.h"
#endif

#if wxUSE_SPINCTRL
#include "wx/spinctrl.h"
#endif

#include "wx/thread.h"
#include "wx/dialog.h"
#include "wx/notebook.h"
#include "wx/panel.h"
#include "wx/bmpbuttn.h"
#include "wx/statline.h"
#include "wx/statbmp.h"
#include "wx/imaglist.h"
#include "wx/app.h"
#include "wx/regex.h"
#include "wx/listctrl.h"
#include "wx/file.h"
#include "wx/filesys.h"
#include "wx/timer.h"
#include "wx/datetime.h"
#include "wx/hash.h"
#include "wx/treectrl.h"
#include "wx/list.h"
#include "wx/stdpaths.h"
#include "wx/print.h"
#include "wx/aui/aui.h"
#include "wx/calctrl.h"
#include "wx/datectrl.h"
#include "wx/generic/datectrl.h"
#include "wx/zipstrm.h"
#include "wx/wfstream.h"
#include <wx/fs_zip.h>
#include <wx/artprov.h>
#include "wx/txtstrm.h"
#include "wx/mstream.h"
#include "wx/grid.h"
#include <wx/progdlg.h>
#include <wx/textfile.h>
#include <wx/tokenzr.h>
#include <wx/hashmap.h>
#include <wx/hashset.h>
#include <wx/splash.h>
#include <wx/socket.h>
#include <wx/splitter.h>
#include <wx/dynlib.h>
#include <wx/help.h>
#include <wx/cshelp.h>
#include <wx/image.h>
#include <wx/aboutdlg.h>

#endif /* GUI_LIB_HPP */