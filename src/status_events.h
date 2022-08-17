#ifndef SRC_STATUS_EVENTS_H_
#define SRC_STATUS_EVENTS_H_

struct bd_status_events {
  int event_id;
  int module_id;
  int new_status;
  char change_date[11];
  char change_time[9];
} bd_event_status;

#endif  // SRC_STATUS_EVENTS_H_
