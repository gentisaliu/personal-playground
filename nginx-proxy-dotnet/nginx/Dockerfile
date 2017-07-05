FROM nginx:latest

# Remove the default Nginx configuration file
RUN rm -v /etc/nginx/nginx.conf

# Copy the configuration file from the current directory
ADD nginx.conf /etc/nginx/

# Append "daemon off;" to the beginning of the configuration
RUN echo /etc/nginx/nginx.conf

# Expose ports
EXPOSE 80

ENTRYPOINT ["nginx", "-g", "daemon off;"]