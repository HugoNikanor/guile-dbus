#ifndef __DBUS_MESSAGE_TYPE__
#define __DBUS_MESSAGE_TYPE__

#include <libguile.h>
#include <dbus/dbus.h>

/**
 * Guile-DBus message SMOB data.
 */
struct dbus_message_data {
    DBusMessage* message;
};


struct dbus_message_data* _scm_to_dbus_message_data(SCM x);
SCM _scm_from_dbus_message(DBusMessage* message);


void init_dbus_message_type();

#endif  /* ifndef __DBUS_MESSAGE_TYPE__ */