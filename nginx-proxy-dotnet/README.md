# nginx-proxy-dotnet

## Instructions

#### Create Docker image for ASP.NET Core App

```
git clone https://github.com/gentisaliu/playground.git
cd playground/nginx-proxy-dotnet/aspnetapp
```

```
dotnet restore
dotnet run
```

```
dotnet publish -c Release -o published
docker build -t aspnetapp .
docker run -d -p 8181:80 aspnetapp
```

#### Create Docker image for nginx

```
docker build -t nginx-proxy .
docker run -d -p 8080:80 nginx-proxy
```

## Sources

- [Tutorial: Deploy an ASP.NET Core Application on Linux with Docker](https://stormpath.com/blog/tutorial-deploy-asp-net-core-on-linux-with-docker)
- [Set up a hosting environment for ASP.NET Core on Linux with Nginx, and deploy to it](https://docs.microsoft.com/en-us/aspnet/core/publishing/linuxproduction)
- [Docker: Getting Started](https://docs.docker.com/get-started/)
- [.NET Core Docker Samples](https://github.com/dotnet/dotnet-docker-samples)
- [library/nginx at Docker Hub](https://hub.docker.com/_/nginx/)