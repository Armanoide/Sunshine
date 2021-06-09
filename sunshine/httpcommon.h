#include "network.h"
#include "thread_safe.h"

namespace http {

void init(std::shared_ptr<safe::signal_t> shutdown_event);
int create_creds(const std::string &pkey, const std::string &cert);
int save_user_creds(const std::string &file, const std::string &username, const std::string &password, const std::string &salt);
int reload_user_creds(const std::string &file);
extern std::string unique_id;
extern net::net_e origin_pin_allowed;

} // namespace http