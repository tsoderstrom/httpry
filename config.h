/*

  ----------------------------------------------------
  httpry - HTTP logging and information retrieval tool
  ----------------------------------------------------

  Copyright (c) 2005-2007 Jason Bittel <jason.bittel@gmail.com>

*/

#define PROG_NAME "httpry"
#define PROG_VER "0.1.0"

/* Directory to switch to when running in daemon mode
   *** Can be overridden with -r */
#define RUN_DIR "/"

/* Location to store the PID file when running in daemon mode */
#define PID_FILE "/var/run/httpry.pid"

/* Where to send unnecessary output */
#define NULL_FILE "/dev/null"

/* Default packet capture filter; must be standard Pcap format
   *** Can be overridden with -l */
#define DEFAULT_CAPFILTER "tcp port 80 or 8080"

/* Default output format string
   *** Can be overridden with -s */
#define DEFAULT_FORMAT "Timestamp,Source-IP,Dest-IP,Direction,Method,Host,Request-URI,HTTP-Version,Status-Code,Reason-Phrase"

/* HTTP specific constants; should never change! */
#define DELIM "\r\n"
#define GET_STRING "GET "
#define HEAD_STRING "HEAD "
#define HTTP_STRING "HTTP/"
