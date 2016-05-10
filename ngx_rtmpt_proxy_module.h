/* 
 * Copyright clickmeeting.com 
 * Wojtek Kosak <wkosak@gmail.com>
 */

#ifndef _NGX_RTMPT_PROXY_MODULE_H_INCLUDED_
#define _NGX_RTMPT_PROXY_MODULE_H_INCLUDED_

#include <ngx_config.h>
#include <ngx_core.h>


typedef void (*ngx_rtmpt_handler_pt)(ngx_rtmpt_proxy_session_t *s);

typedef struct {
	ngx_http_upstream_conf_t       upstream;
    ngx_uint_t			   			proxy_flag;
    ngx_str_t                     	target;
	ngx_str_t                     	ident;
	ngx_log_t						*log;
	
	void 							**sessions;
} ngx_rtmpt_proxy_loc_conf_t;

extern ngx_module_t  ngx_rtmpt_proxy_module;

#endif