

#include "clog.h"

#define LOGGER_NOT_INITIALIZED_MSG "Default logger initialized (please call log_Initialize() if you wish to use a custom logger)"
#define LOGGER_MODULE "aries-framework/common"

clog_init();

// New creates and returns a Logger implementation based on given module name.
// note: the underlying logger instance is lazy initialized on first use.
// To use your own logger implementation provide logger provider in 'Initialize()' before logging any line.
// If 'Initialize()' is not called before logging any line then default logging implementation will be used.
